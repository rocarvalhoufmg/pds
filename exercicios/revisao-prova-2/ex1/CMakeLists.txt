cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Collect all source files from different directories
file(GLOB SOURCE "implementacao/*.cpp")

# Combine all source files into a single list
set(SOURCES
    ${SOURCE}
    main.cpp
)

# Include header files
include_directories(cabecalho)

# Create an executable
add_executable(my_program ${SOURCES})