cmake_minimum_required(VERSION 3.16)
project(grow-a-garden-farm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(growagardenfarm
    src/main.cpp
    src/farmer.cpp
    src/cycles.cpp
    src/alerts.cpp
)

target_include_directories(growagardenfarm PRIVATE include)

if(WIN32)
    target_link_libraries(growagardenfarm PRIVATE userenv)
endif()
