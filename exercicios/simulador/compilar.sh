#!/bin/bash
source ./compilar.sh
cd acessorios-cpp/
g++ -c *.cpp 
cd ..
cd core-simulador-cpp
g++ -c *.cpp 
cd ..
g++ principal\\main.cpp acessorios-cpp\\*.o core-simulador-cpp\\*.o