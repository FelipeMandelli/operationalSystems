#include <stdlib.h>
#include <dlfcn.h>

int main() {
    void *handle = dlopen("./libutil.so", RTLD_LAZY);

    void (*saudar)(void) = dlsym(handle, "saudar");

    saudar();

    dlclose(handle);
    
    exit(EXIT_SUCCESS);
}