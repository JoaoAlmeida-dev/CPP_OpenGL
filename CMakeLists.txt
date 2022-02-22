cmake_minimum_required(VERSION 3.21)
project(CPP_OpenGL)

set(CMAKE_CXX_STANDARD 14)


add_executable(${PROJECT_NAME} src/main.cpp src/vendor/glad/glad.c src/Window.cpp)

add_subdirectory(lib/glfw-3.3.6)
target_link_libraries(${PROJECT_NAME} glfw)
target_include_directories(${PROJECT_NAME} PRIVATE lib/glfw-3.3.6/include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

