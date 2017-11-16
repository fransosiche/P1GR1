cmake_minimum_required(VERSION 3.8)
project(Cardiofr�quence_3_4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        actions.c
        actions.h
        donnees.c
        donnees.h
        main.c
        menu.c
        menu.h)

add_executable(Cardiofr�quence_3_4 ${SOURCE_FILES})