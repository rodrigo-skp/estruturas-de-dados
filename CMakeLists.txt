cmake_minimum_required(VERSION 3.26)
project(ed)

enable_testing()

include(GoogleTest)
include(CTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_executable(vector_list src/vector_list.cpp)
add_executable(vector_list_test test/vector_list.cpp)
target_link_libraries(vector_list_test gtest gtest_main)
gtest_add_tests(TARGET vector_list_test)

add_executable(linked_list src/linked_list.cpp)
add_executable(linked_list_test test/linked_list.cpp)
target_link_libraries(linked_list_test gtest gtest_main)
gtest_add_tests(TARGET linked_list_test)

add_executable(doubly_linked_list src/doubly_linked_list.cpp)
add_executable(doubly_linked_list_test test/doubly_linked_list.cpp)
target_link_libraries(doubly_linked_list_test gtest gtest_main)
gtest_add_tests(TARGET doubly_linked_list_test)
