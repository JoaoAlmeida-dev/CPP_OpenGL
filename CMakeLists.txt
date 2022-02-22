cmake_minimum_required(VERSION 3.21)
project(CPP_OpenGL)

set(CMAKE_CXX_STANDARD 17)


add_executable(${PROJECT_NAME} src/main.cpp src/vendor/glad/glad.c src/Window.cpp src/Application.cpp src/Application.h)

add_subdirectory(lib/glfw-3.3.6)
target_link_libraries(${PROJECT_NAME} glfw)
target_include_directories(${PROJECT_NAME} PRIVATE lib/glfw-3.3.6/include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

