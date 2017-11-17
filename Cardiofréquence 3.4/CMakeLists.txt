cmake_minimum_required(VERSION 3.8)
project(Automates_Ressourcesv2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        actions.c
        actions.h
        entreeSortie.c
        entreeSortie.h
        main.c)

add_executable(Automates_Ressourcesv2 ${SOURCE_FILES})