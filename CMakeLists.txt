cmake_minimum_required(VERSION 3.15)

# Project name and language
project(TuneShare LANGUAGES CXX)


# Enable compile commands for tooling
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Choose the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Default to Release build if none specified
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Add directories that contain their own CMakeLists.txt
add_subdirectory(src)