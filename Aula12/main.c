#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Códigos de cor ANSI
#define COLORED_LINE "\033[32m"
#define COLOR_RESET "\033[0m"

void highlightWord(const char *line, const char *searchString) {
    const char *pos = line;
    while ((pos = strstr(pos, searchString)) != NULL) {
        // Imprime parte da linha até a palavra encontrada
        fwrite(line, 1, pos - line, stdout);
        // Destaca a palavra encontrada
        printf("%s%s%s", COLORED_LINE, searchString, COLOR_RESET);
        pos += strlen(searchString);
        line = pos;
    }
    // Imprime o restante da linha
    printf("%s", line);
}

void searchInFile(const char *filePath, const char *searchString) {
    FILE *file = fopen(filePath, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];
    int lineNumber = 0;
    int found = 0;

    while (fgets(line, sizeof(line), file)) {
        lineNumber++;
        if (strstr(line, searchString) != NULL) {
            printf("Linha %d: ", lineNumber);
            highlightWord(line, searchString);
            found = 1;
        }
    }

    if (!found) {
        printf("A string \"%s\" não foi encontrada no arquivo.\n", searchString);
    }

    fclose(file);
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
