cmake_minimum_required(VERSION 2.8)

project(eigen)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(helloEigen helloEigen.cpp)
target_link_libraries(helloEigen ${EIGEN3_INCLUDE_DIR})

add_executable(example1 example1.cpp)
target_link_libraries(example1 ${EIGEN3_INCLUDE_DIR})

add_executable(example2 example2.cpp)
target_link_libraries(example2 ${EIGEN3_INCLUDE_DIR})

add_executable(example3 example3.cpp)
target_link_libraries(example3 ${EIGEN3_INCLUDE_DIR})

add_executable(example4 example4.cpp)
target_link_libraries(example4 ${EIGEN3_INCLUDE_DIR})

add_executable(example5 example5.cpp)
target_link_libraries(example5 ${EIGEN3_INCLUDE_DIR})

add_executable(example6 example6.cpp)
target_link_libraries(example6 ${EIGEN3_INCLUDE_DIR})

add_executable(example7 example7.cpp)
target_link_libraries(example7 ${EIGEN3_INCLUDE_DIR})

add_executable(example8 example8.cpp)
target_link_libraries(example8 ${EIGEN3_INCLUDE_DIR})


add_executable(example9 example9.cpp)
target_link_libraries(example9 ${EIGEN3_INCLUDE_DIR})