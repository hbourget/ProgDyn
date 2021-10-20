cmake_minimum_required(VERSION 3.20)
project(ProgrammationDynamique C)

set(CMAKE_C_STANDARD 99)

add_executable(ProgrammationDynamique main.c sources/dicothomy.c headers/dicothomy.h)
