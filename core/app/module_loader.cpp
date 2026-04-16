#include <iostream>
#include <dlfcn.h>

typedef void (*init_func)();

void load_module(const char* path) {
    void* handle = dlopen(path, RTLD_LAZY);

    if (!handle) {
        std::cerr << "Cannot load module: " << path << "\n";
        return;
    }

    init_func init = (init_func)dlsym(handle, "init");

    if (!init) {
        std::cerr << "Cannot find init function in: " << path << "\n";
        dlclose(handle);
        return;
    }

    init();
}