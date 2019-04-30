cmake_minimum_required(VERSION 3.13)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp src/DataStructure/queue.cpp include/DataStructure/queue.h
               src/DynamicProgramming/fibonacci.cpp include/DynamicProgramming/fibonacci.h
               src/DataStructure/array.cpp include/DataStructure/array.h
               src/DataStructure/stack.cpp include/DataStructure/stack.h
        src/DataStructure/linked_list.cpp include/DataStructure/linked_list.h)