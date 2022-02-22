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
    public:
        Window();
        Window (const Window &rObj);
        void Initialize();
    };

}


#endif //CPP_OPENGL_WINDOW_H
