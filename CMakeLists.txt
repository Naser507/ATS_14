cmake_minimum_required(VERSION 3.16)

project(ATS_14 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ATS_14
    core/app/main.cpp
)