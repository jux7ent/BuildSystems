cmake_minimum_required(VERSION 3.10.2)
project(A)

find_package(PythonInterp REQUIRED)
if(PYTHONINTERP_FOUND)
    add_custom_command(
        OUTPUT index.h
        COMMAND python ${PROJECT_SOURCE_DIR}/preparing.py
        DEPENDS ${PROJECT_SOURCE_DIR}/preparing.py
    )
endif ()

add_custom_target(gen_index DEPENDS index.h)
