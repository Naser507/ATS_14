#include <iostream>

void load_module(const char* path);

int main() {
    std::cout << "ATS_14 Orchestrator Starting...\n";

    load_module("./bin/libui_core.so");

    return 0;
}