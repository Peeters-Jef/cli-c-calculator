cmake_minimum_required(VERSION 3.16)
project(CLI_calculator)


find_package(PkgConfig REQUIRED)

set(SOURCES
    main.c
)

add_executable(${PROJECT_NAME} ${SOURCES})
