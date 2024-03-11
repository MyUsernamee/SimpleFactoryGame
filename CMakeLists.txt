
cmake_minimum_required(VERSION 3.27.4)
project(FactoryGame)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)

# Set the path to the Raylib library
set(RAYLIB_PATH "dependencies/raylib")
set(RAYLIB_CPP_PATH "dependencies/raylib-cpp")

# raylib-cpp
find_package(raylib_cpp QUIET)
if (NOT raylib_cpp_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        raylib_cpp
        GIT_REPOSITORY https://github.com/RobLoach/raylib-cpp.git
        GIT_TAG v5.0.1
    )
    FetchContent_MakeAvailable(raylib_cpp)
endif()

find_package(raylib 3.0 REQUIRED) # Requires at least version 3.0

set(CMAKE_C_STANDARD 11) # Requires C11 standard

# Checks if OSX and links appropriate frameworks (only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()

# Set the source files for your project
set(SOURCES
    src/main.cpp
)

# Include all files in the /include directory
include_directories(include)

# Include the raylib-cpp headers
include_directories(${RAYLIB_CPP_PATH}/include)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} raylib)