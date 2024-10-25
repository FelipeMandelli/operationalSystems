#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define MAX_LINE_LENGTH 1024

#define COLOR_RED "\033[31m"
#define COLOR_RESET "\033[0m"

void highlightWord(const char *line, const char *searchString) {
    const char *pos = line;
    while ((pos = strstr(pos, searchString)) != NULL) {

        fwrite(line, 1, pos - line, stdout);

        printf("%s%s%s", COLOR_RED, searchString, COLOR_RESET);
        pos += strlen(searchString);
        line = pos;
    }

    printf("%s", line);
}

void searchInFile(const char *filePath, const char *searchString) {
    int fd = open(filePath, O_RDONLY);
    if (fd == -1) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];
    int lineNumber = 0;
    int found = 0;

    while (1) {
        ssize_t bytesRead = read(fd, line, sizeof(line) - 1);
        if (bytesRead < 0) {
            perror("Erro ao ler o arquivo");
            close(fd);
            exit(EXIT_FAILURE);
        }

        if (bytesRead == 0) {
            break;
        }

        line[bytesRead] = '\0';

        char *lineStart = line;
        char *lineEnd;
        
        while ((lineEnd = strchr(lineStart, '\n')) != NULL) {
            *lineEnd = '\0';
            lineNumber++;
            if (strstr(lineStart, searchString) != NULL) {
                printf("Linha %d: ", lineNumber);
                highlightWord(lineStart, searchString);
                found = 1;
            }
            lineStart = lineEnd + 1;
            printf("\n");
        }
    }

    if (!found) {
        printf("A string \"%s\" não foi encontrada no arquivo.\n", searchString);
    }

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <caminho do arquivo> <string para buscar>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *filePath = argv[1];
    const char *searchString = argv[2];

    searchInFile(filePath, searchString);
    return EXIT_SUCCESS;
}
