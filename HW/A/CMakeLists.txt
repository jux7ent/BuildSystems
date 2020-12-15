cmake_minimum_required(VERSION 3.10.2)
project(A)

if(UNIX)
    add_custom_command(
        OUTPUT index.h
        COMMAND sudo apt-get update && sudo apt-get install python3 && python3 ${PROJECT_SOURCE_DIR}/preparing.py
        DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
    )
endif (UNIX)

add_custom_target(gen_index DEPENDS index.h)
