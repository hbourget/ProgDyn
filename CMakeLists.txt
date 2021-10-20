cmake_minimum_required(VERSION 3.20)
project(ProgDyn C)

set(CMAKE_C_STANDARD 99)

add_executable(ProgDyn main.c sources/dicothomy.c headers/dicothomy.h sources/knapsack.c headers/knapsack.h sources/tests.c headers/tests.h)

add_custom_target(documentation ALL COMMAND doxygen)