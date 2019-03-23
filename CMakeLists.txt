cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

# Set default project information
project(CppDesignPatterns VERSION 0.0.1 LANGUAGES CXX)

# Set up the project C++11 compatible
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CMakeParseArguments)

# An helper function to create executables
function(build_executable)
  set(oneValueArgs NAME)
  set(multiValueArgs SRCS)
  cmake_parse_arguments(ARGS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
  add_executable(${ARGS_NAME}.bin ${ARGS_SRCS})
endfunction()

# Add sub directories
add_subdirectory(Adapter_Inheritance)
add_subdirectory(Adapter_Instance)
add_subdirectory(Iterator)
add_subdirectory(Template)
