cmake_minimum_required(VERSION 3.1)
project(Task1)
<<<<<<< HEAD
set(Task1_SRC fl.cpp autotest.cpp class.cpp)
set(Task1_HDR fl.hpp class.hpp autotest.hpp)
add_executable(${PROJECT_NAME} ${Task1_SRC} ${Task1_HDR})
=======
set(Task1_SRC fl.cpp autotest.cpp)
set(Task1_HDR class.hpp autotest.hpp)
add_executable(${PROGECT_NAME} ${Task1_SRC} ${Task1_HDR})
>>>>>>> main
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")
