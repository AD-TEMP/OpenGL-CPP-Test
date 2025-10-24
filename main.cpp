// Using tutorial https://codezup.com/c-graphics-programming-with-opengl/

// Create a new C++ project using your preferred IDE
// Include the necessary headers for OpenGL and GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Initialize GLFW and create a window
int main() {

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Example", glfwGetPrimaryMonitor(), NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    if (glewInit() != GLEW_OK) {
        return -1;
    }

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        // Clear the screen
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap the buffers
        glfwSwapBuffers(window);

        // Poll for events
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
    return 0;
}