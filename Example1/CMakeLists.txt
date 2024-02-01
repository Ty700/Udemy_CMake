# Step 0. Create src and CMakeFile
# Step 1. mkdir build
# Step 2. cd build
# Step 3. tell cmake where build is. 
#           - cmake .. - generating the build files / configuring the files
# Step 4. cmake --build .
# Step 5. ./Executable


cmake_minimum_required(VERSION 3.22)

#C++ is an operation so C++ is represented by CXX
project(
    HelloWorld 
    VERSION 1.0.0 
    LANGUAGES C)

add_executable(Executable main.c)

