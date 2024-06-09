cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set source files
set(SOURCES
    Caminhao.cpp
    Van.cpp
    Veiculo.cpp
    main.cpp
)

# Create an executable
add_executable(my_program ${SOURCES})