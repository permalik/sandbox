# CMakeLists.txt
cmake_minimum_required(VERSION 3.10) # Specify the minimum version of CMake
project(insertion_sort C)      # Define the project name and language

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add compile_options for debug information
add_compile_options(-g)

# Specify the source files and header files
set(SOURCES
    insertion_sort.c
)

# set(HEADERS
#     src/insertion_sort.h
# )

# Create an executable target
add_executable(insertion_sort ${SOURCES})

# Optionally, specify include directories (e.g., if you have headers in other directories)
# target_include_directories(insertion_sort PRIVATE src)

# Add custom commands for cleaning up files
# CMake handles cleaning up build files automatically, so no need for custom commands.
