cmake_minimum_required(VERSION 3.14)
project(TuneShareBackend CXX)
set(CMAKE_CXX_STANDARD 17)

# Find required packages (assuming Drogon)
find_package(Drogon CONFIG REQUIRED)
find_package(libpqxx CONFIG REQUIRED)
find_package(argon2 CONFIG REQUIRED)

# Add source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create executable
add_executable(tuneshare_backend ${SOURCES})

# Include directories
target_include_directories(tuneshare_backend PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link libraries
target_link_libraries(tuneshare_backend PRIVATE Drogon::Drogon libpqxx::pqxx argon2)