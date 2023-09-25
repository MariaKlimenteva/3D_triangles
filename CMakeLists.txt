cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
project("3D_triangles")

file(GLOB SRC "src/*")
add_executable(RELEASE ${SRC})
target_include_directories(RELEASE PRIVATE "include")
