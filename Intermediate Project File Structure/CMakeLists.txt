cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C)

#Since it is best practice to make CMakeLists.txt in each directory
#rather than have it all in the root dir
#we have to tell CMake where to find the other CMakeLists.txt
add_subdirectory(src)
add_subdirectory(app)

#we would still have a #include "my_lib.h" error as it can't find external libraries
#go to src CMakeLists.txt to see how we solve that issue

#Note: Executable will be in build/app since our main.c is in the app dir

