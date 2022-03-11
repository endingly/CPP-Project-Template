cmake_minimum_required(VERSION 3.10)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
#  
project(Mytest_test)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)
aux_source_directory(./ TEST_SRC_FILE)


find_package(GTest REQUIRED)


add_executable(${PROJECT_NAME} ${TEST_SRC_FILE})


target_link_libraries(${PROJECT_NAME} PRIVATE Mytest GTest::gtest GTest::gtest_main)