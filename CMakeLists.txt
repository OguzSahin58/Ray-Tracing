# filepath: c:\Users\Oguz\Projects\Ray Tracing\CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(RayTracing)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(ray_tracing ray_tracing.cpp)