cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)

project(BangladeshMap C)


set(SOURCES
    src/main.c
    src/Map.c
)


include_directories(include)

add_executable(BangladeshMap ${SOURCES})