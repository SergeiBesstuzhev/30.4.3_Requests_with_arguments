cmake_minimum_required(VERSION 3.23)
project(37_4_1_Graphing_calculator)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)
#set(CMAKE_AUTOUIC ON)

#set(CMAKE_PREFIX_PATH "D:/Qt/5.15.2/mingw81_64/lib/cmake")

if (CMAKE_COMPILER_IS_GNUCXX)
    message ("Compiler set options...")
    add_compile_options(
            -Werror
            -pedantic-errors
            -Wall
            -Wextra
            -Wpedantic
            -Wcast-align
            -Wcast-qual
            -Wconversion
            -Wctor-dtor-privacy
            -Wduplicated-branches
            -Wduplicated-cond
            -Wextra-semi
            -Wfloat-equal
            -Wlogical-op
            -Wnon-virtual-dtor
            -Wold-style-cast
            -Woverloaded-virtual
            -Wredundant-decls
            -Wsign-conversion
            -Wsign-promo
    )
else ()
    message ("Unknown compiler")
endif ()

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
