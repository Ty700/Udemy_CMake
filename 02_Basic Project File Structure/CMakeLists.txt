cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C)

#defining my_lib.c to be a library
add_library(Library STATIC my_lib.c)

#Telling CMake our executable is main.c
add_executable(Executable main.c)

#Linking out Library to our executable
target_link_libraries(Executable PUBLIC Library)

#to check if just our library compiles without error, we can do:   
#cd build
#cmake --build . --target Library
# this cmd will only compile the Library which is my_lib.c