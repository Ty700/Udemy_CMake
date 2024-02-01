cmake_minimum_required(VERSION 3.22)

project(CProjectTemplate VERSION 1.0.0 LANGUAGES C)

#we would still have a #include "my_lib.h" error as it can't find external libraries
#go to src CMakeLists.txt to see how we solve that issue

#Note: Executable will be in build/app since our main.c is in the app dir

# we have add_library(Library STATIC my_lib.c)
# - Library is a variable name

# What if I didn't want to remember the spelling of the Library variable?

# In the root CMakeLists.txt we can set a variable name with a value

# set(<var_name> <value>)

# Common to indicate variable names with all uppercase
# set(LIBRARY_NAME "Library")
# - we could leave the quotes out and CMake will get the right type since values can be int values

# set(EXECUTABLE_NAME Executable)

# Now, in the my_lib CMakeLists.txt we can do:

# add_library(${LIBRARY_NAME} my_lib.c)

#Forces the compiler to be the GCC17 standard
set(CMAKE_C_STANDARD 17)

#Requires the C17 standard to be used
set(CMAKE_C_STANDARD_REQUIRED ON)

#Removes all the non-standard stuff? Not sure
set(CMAKE_C_EXTENSIONS OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)


option(COMPLILE_EXECUTALBE "Whether to compile the executable" OFF)


#Since it is best practice to make CMakeLists.txt in each directory
#rather than have it all in the root dir
#we have to tell CMake where to find the other CMakeLists.txt
add_subdirectory(src)

#if EXECUTBALE is gonna be compiled, add subdir(app), else don't
#When you do cmake .. you can do a cmd define and turn COMPILE_EXECUTABLE to be on and it'll build with app
if(COMPLILE_EXECUTALBE)
    message("Exe. Compiling")
    add_subdirectory(app)
else()
    message("W/o exe. compiling")
endif()