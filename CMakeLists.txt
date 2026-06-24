cmake_minimum_required(VERSION 3.14)
project(CAS_Mathlib VERSION 0.11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find GoogleTest installed by homebrew
find_package(GTest REQUIRED)


add_library(cas_math STATIC src/mathlib.cpp)

target_include_directories(cas_math 
   PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(mathcli 
    src/main.cpp
)

target_link_libraries(mathcli
   PRIVATE
      cas_math
)

add_executable(cas_unit_tests
   tests/test_mathlib.cpp
)

target_link_libraries(cas_unit_tests
    PRIVATE
        cas_math
        GTest::gtest
        GTest::gtest_main
)

target_include_directories(cas_unit_tests
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

enable_testing()
add_test(NAME CAS_Unit_Tests COMMAND cas_unit_tests)

# Optional: nicer test discovery (uncomment if you want)
# include(GoogleTest)
# gtest_discover_tests(cas_unit_tests)


