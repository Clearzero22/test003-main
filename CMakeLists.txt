cmake_minimum_required(VERSION 3.0.0)
project(test0003 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(test0003 ./src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
