cmake_minimum_required(VERSION 3.10)
project(c3pm_test_wierdmath)

set(CMAKE_CXX_STANDARD 11)

include_directories(imports/c3pm_test_libmath)
include_directories(imports/c3pm_test_polinomial)
include_directories(imports/c3pm_test_polynomial2)
include_directories(src/exports)

add_executable(c3pm_test_wierdmath
        imports/c3pm_test_libmath/libmath.cpp
        imports/c3pm_test_libmath/libmath.h
        imports/c3pm_test_polinomial/polinomial.cpp
        imports/c3pm_test_polinomial/polinomial.h
        imports/c3pm_test_polynomial2/polynomial2.cpp
        imports/c3pm_test_polynomial2/polynomial2.h
        src/exports/wierd_math.h
        src/main.cpp)
