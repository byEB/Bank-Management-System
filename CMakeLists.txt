cmake_minimum_required(VERSION 3.18)
project(bank-management-system)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
add_executable(runApp main.cpp)


find_package(SQLite3 REQUIRED)

find_path(SQLITE3_INCLUDE_DIRS sqlite3.h)
find_library(SQLITE3_LIBRARIES sqlite3)
include_directories(${SQLITE3_INCLUDE_DIRS})
target_link_libraries(runApp ${SQLITE3_LIBRARIES})




include_directories(./src)
add_subdirectory(src)
add_subdirectory(tests)
