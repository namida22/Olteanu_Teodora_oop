cmake_minimum_required(VERSION 3.15)
project(Teodora_Olteanu_712_lab2)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)
add_executable(src_run ${SOURCE_FILES})
include_directories(src)
add_subdirectory(src)

target_link_libraries(src_run src)

add_subdirectory(test)