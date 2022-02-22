#include <iostream>
#include "Window.h"
#include <cstdlib>

//void processInput(GLFWwindow *window);

int main() {

    cpp_tutorial::Window window;

    if(!window.Initialize()){
        return EXIT_FAILURE;
    }
    if(!window.CreateWindow()){
        return EXIT_FAILURE;
    }

    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

    while (!window.ShouldClose()){

        glClear(GL_COLOR_BUFFER_BIT);
        window.Update();
        //processInput(window.m_pWindow);
    }

    return EXIT_SUCCESS;
}


/*
void processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}*/
