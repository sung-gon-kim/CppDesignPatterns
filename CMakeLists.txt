cmake_minimum_required(VERSION 3.5.1 FATAL_ERROR)

# Set default project information
project(CppDesignPatterns VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/scripts")
include(CMakeUtils)

# Set up the project C++11 compatible
set_cxx_standard(11)

enable_static_analysis(cppcheck cpplint lwyu)
enable_testing()
enable_test_coverage()

# Add sub directories
add_all_subdirectories()
