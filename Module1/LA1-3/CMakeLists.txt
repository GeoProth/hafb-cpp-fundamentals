# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(LA1-3 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(my_functions
    STATIC
    my_functions.h 
    my_functions.cpp 
)


# Note: In windows, the executable name will be: main.exe
add_executable(main main.cpp)

target_link_libraries(main my_functions) #link library
