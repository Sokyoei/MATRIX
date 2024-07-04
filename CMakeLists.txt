cmake_minimum_required(VERSION 3.20.0)

project(MATRIX VERSION 0.0.1)

include(cmake/compiler.cmake)

find_package(Eigen3 CONFIG REQUIRED)
if(Eigen3_FOUND)
    add_subdirectory(eigen_learn)
endif()
