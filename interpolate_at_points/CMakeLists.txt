cmake_minimum_required(VERSION 3.4)

project(interpolate_at_points)

# Set path for CMake dependencies
IF(NOT DEFINED CMAKE_MODULE_PATH)
  # This block is executed only if this project is configuread as stand alone
  # that is not as a subproject of 'femdk' project
  SET(CMAKE_MODULE_PATH 
      "${CMAKE_SOURCE_DIR}/config/cmake_modules/" 
      CACHE PATH "Path to configuration directory")
ENDIF(NOT DEFINED CMAKE_MODULE_PATH)

set (CMAKE_CXX_STANDARD 11)

find_package(VTK COMPONENTS vtkCommonCore  vtkIOLegacy REQUIRED NO_MODULE)

include(${VTK_USE_FILE})

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
