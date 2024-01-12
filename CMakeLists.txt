cmake_minimum_required(VERSION 3.13)
project(ecole_cpp_f_examen)
set(CMAKE_CXX_STANDARD 20)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(exe
        main.cpp
        Animal.cpp
        Animal.h
        Mammal.cpp
        Mammal.h
        Bird.cpp
        Bird.h
        Reptile.cpp
        Reptile.h
        Zoo.cpp
        Zoo.h
        KNN.h
        KNNDouble.cpp
        KNNDouble.h
        KNNString.cpp
        KNNString.h
)