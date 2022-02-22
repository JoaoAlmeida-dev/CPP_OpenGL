//
// Created by SoPlays on 2/22/2022.
//

#include "Window.h"

namespace  cpp_tutorial{
    Window::Window() {
        std::cout << "Window::Window::Window Created" << std::endl;
    }
    Window::Window(const Window &rObj) {
        std::cout << "Window::Window::Window Copied" << std::endl;
    }

    Window::~Window() {

        glfwDestroyWindow(m_pWindow);
        glfwTerminate();
        m_pWindow = nullptr;

        std::cout << "Window::~Window::Window Destroyed" << std::endl;

    }
//region initializers
    bool Window::Initialize() {
        return initializeGLFW() && initializeGLAD();
    }

    bool Window::initializeGLFW() {
        if(!glfwInit()){
            std::cout << "Window::initializeGLFW::Failed to initialize glfw" << std::endl;
            return false;
        }
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); //macos only

        //glfwSetFramebufferSizeCallback(m_pWindow, Framebuffer_size_callback);


        return true;
    }

    bool Window::initializeGLAD() {
        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            std::cout << "Window::initializeGLAD::Failed to initialize GLAD" << std::endl;
            return false;
        }
        return true;
    }

//endregion

    bool Window::CreateWindow() {

        m_pWindow = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr, nullptr);
        if (m_pWindow == nullptr)
        {
            std::cout << "Window::CreateWindow::Failed to create GLFW window" << std::endl;
            return false;
        }
        glfwMakeContextCurrent(m_pWindow);
        return true;
    }


    void Window::Update() {

        glfwSwapBuffers(m_pWindow);
        glfwPollEvents();

    }

    bool Window::ShouldClose() const
    {
        return glfwWindowShouldClose(m_pWindow);
    }


    void Window::Framebuffer_size_callback(GLFWwindow* window, int width, int height)
    {
        glViewport(0, 0, width, height);
    }

}
