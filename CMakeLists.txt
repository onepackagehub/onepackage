cmake_minimum_required(VERSION 2.8.12)
project(op)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories( include )

SET( ONEPACKAGE_SOURCES
    src/Application.cpp
    src/ArgParser.cpp
)

#set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -pg)

include( build/conanbuildinfo.cmake )
conan_basic_setup()

add_executable( op src/main.cpp ${ONEPACKAGE_SOURCES} )
target_link_libraries( op ${CONAN_LIBS} )