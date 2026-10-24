cmake_minimum_required(VERSION 3.16)

project(HCI_CG_Lab1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.4
)

FetchContent_MakeAvailable(glfw)

add_executable(HCI_CG_Lab1
    HCI_CG_Lab1.cpp
)

target_link_libraries(HCI_CG_Lab1 PRIVATE glfw)

if(WIN32)
    target_link_libraries(HCI_CG_Lab1 PRIVATE opengl32)
endif()