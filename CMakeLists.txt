cmake_minimum_required(VERSION 3.19)
project(failisp C)

set(CMAKE_C_STANDARD 11)

add_executable(failisp main.c parse_args.c parse_args.h failisp.h repl.c repl.h)
target_link_libraries(failisp readline)
