//
// Created by SoPlays on 2/22/2022.
//

#include "Application.h"

bool cpp_tutorial::Application::Initialize() {

    if(!m_window.Initialize()){
        return false;
    }
    return true;

}

void cpp_tutorial::Application::Run() {
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

    while (!m_window.ShouldClose()){

        handleInput();
        update();
        render();

    }
}

void cpp_tutorial::Application::handleInput() {
    if(glfwGetKey(m_window.GetPWindow(), GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(m_window.GetPWindow(), true);
}

void cpp_tutorial::Application::update() {

}

void cpp_tutorial::Application::render() {
    glClear(GL_COLOR_BUFFER_BIT);
    m_window.Update();
}
