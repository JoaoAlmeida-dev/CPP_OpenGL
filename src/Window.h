//
// Created by SoPlays on 2/22/2022.
//

#ifndef CPP_OPENGL_WINDOW_H
#define CPP_OPENGL_WINDOW_H

#include <iostream>
#include "vendor/glad/glad.h"
#include "GLFW/glfw3.h"

namespace cpp_tutorial{

    class Window {
    private:

    public:
        GLFWwindow* m_pWindow = nullptr;

        Window();
        Window (const Window &rObj);
        //destructor
        ~Window();

        bool Initialize();
        bool CreateWindow();
        void Update();

        bool ShouldClose() const;
        static void Framebuffer_size_callback(GLFWwindow *window,
                                              int width,
                                              int height);

    private:
        bool initializeGLFW();
        bool initializeGLAD();

    };



}


#endif //CPP_OPENGL_WINDOW_H
