//
// Created by SoPlays on 2/22/2022.
//

#ifndef CPP_OPENGL_APPLICATION_H
#define CPP_OPENGL_APPLICATION_H

#include "Window.h"

namespace cpp_tutorial {

    class Application {
    private:
        Window m_window;

    public:
        bool Initialize();

        void Run();

    private:
        void handleInput();

        void update();

        void render();


    };

}

#endif //CPP_OPENGL_APPLICATION_H
