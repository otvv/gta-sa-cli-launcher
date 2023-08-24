# cmake minimum version
cmake_minimum_required(VERSION 3.5)

# enable c++17
set(CMAKE_CXX_STANDARD 17)

# project name
project(gta-sa)

# include directories
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/*)

# enable warnings
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra") # gcc
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -wd4668") # msvc

# source files
add_executable(gta-sa src/main.cpp) # here you add all your cpp files

#### for compatibility reasons (<= gcc8) ####
#target_link_libraries(gta-sa stdc++fs)