cmake_minimum_required(VERSION 3.14)
project(TuneShareSrc CXX)
set(CMAKE_CXX_STANDARD 17)

# Add source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create executable
add_executable(TuneShare main.cpp)

# Include directories
target_include_directories(tuneshare_src PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link libraries