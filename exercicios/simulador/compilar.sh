#!/bin/bash
source ./compilar.sh
cd acessorios-cpp/
g++ -c *.cpp 
cd ..
cd core-simulador-cpp
g++ -c *.cpp 
cd ..
g++ principal\\main.cpp acessorios-cpp\\*.o core-simulador-cpp\\*.o
#g++ -I principal/ -I acessorios-cpp/ -I core-simulador-cpp/ -I personagens-cpp/ principal/*.cpp acessorios-cpp/*.cpp core-simulador-cpp/*.cpp personagens-cpp/*.cpp -o programa