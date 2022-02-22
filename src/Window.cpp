//
// Created by SoPlays on 2/22/2022.
//

#include "Window.h"

namespace  cpp_tutorial{
    Window::Window() {
        std::cout << "Window Created" << std::endl;
    }
    Window::Window(const Window &rObj) {
        std::cout << "Window Copied" << std::endl;
    }

    void Window::Initialize() {
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    }


}
