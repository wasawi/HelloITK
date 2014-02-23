cmake_minimum_required(VERSION 2.8)

project(HelloInsight)

# Find ITK.
find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

add_executable(HelloInsight HelloInsight.cxx )

target_link_libraries(HelloInsight ${ITK_LIBRARIES})