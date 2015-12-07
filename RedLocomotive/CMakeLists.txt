cmake_minimum_required(VERSION 3.0)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules")

find_package(STATEBUILDERCPP REQUIRED)

#Automatically add include dirs, lib, lib dirs and definition 
include(${STATEBUILDERCPP_USE_FILE})

set(PROGRAM_NAME RedLocomotive)

set(FSM_FILES RedLocomotive.fsmcpp)

statebuildercpp_compile(FSM_CPP ${FSM_FILES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR} 
                    ${CMAKE_CURRENT_BINARY_DIR}
                    ${SMSTDUTILS_INCLUDE_DIR}
                    )

add_executable(${PROGRAM_NAME} main.cpp ${FSM_CPP} ${FSM_FILES})

target_link_libraries(${PROGRAM_NAME} ${SMSTDUTILS_LIBRARY})
