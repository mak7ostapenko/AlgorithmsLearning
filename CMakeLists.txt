cmake_minimum_required(VERSION 3.13)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp src/DataStructure/queue.cpp include/DataStructure/queue.h
               src/DynamicProgramming/fibonacci.cpp include/DynamicProgramming/fibonacci.h
               src/DataStructure/array.cpp include/DataStructure/array.h
               src/DataStructure/stack.cpp include/DataStructure/stack.h
               src/DataStructure/linked_list.cpp include/DataStructure/linked_list.h src/tests.cpp include/tests.h src/GraphAlgorithms/dijkstra.cpp include/GraphAlgorithms/dijkstra.h include/GraphAlgorithms/min_spanning_tree.h src/GraphAlgorithms/min_spanning_tree.cpp include/GraphAlgorithms/traveling_salesman_problem.h src/GraphAlgorithms/traveling_salesman_problem.cpp src/DynamicProgramming/knapsack_problem.cpp include/DynamicProgramming/knapsack_problem.h include/DynamicProgramming/job_assignment_problem.h src/DynamicProgramming/job_assignment_problem.cpp)