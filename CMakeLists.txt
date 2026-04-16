cmake_minimum_required(VERSION 3.16)

project(ATS_14 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------
# Main Orchestrator
# -------------------------
add_executable(ATS_14
    core/app/main.cpp
    core/app/module_loader.cpp
)

target_link_libraries(ATS_14 dl)

set_target_properties(ATS_14 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# -------------------------
# UI Core Module (Plugin)
# -------------------------
add_library(ui_core SHARED
    ${CMAKE_SOURCE_DIR}/core/modules/ui_core/ui_core.cpp
)

set_target_properties(ui_core PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)