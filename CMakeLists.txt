cmake_minimum_required(VERSION 2.8)

file(GLOB helloworld_SRC
        "cpp03/ex03/*.h"
        "cpp03/ex03/*.cpp"
        )

add_executable(helloworld ${helloworld_SRC})