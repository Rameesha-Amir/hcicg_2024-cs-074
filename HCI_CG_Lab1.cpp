#include <stdio.h>
#include <GLFW/glfw3.h>

int main()
{
    // Start GLFW
    if (!glfwInit())
    {
        printf("GLFW initialization failed.\n");
        return -1;
    }

    // Create 800 x 600 window
    GLFWwindow* window = glfwCreateWindow(
        800,
        600,
        "HCI & Computer Graphics - Lab 1",
        NULL,
        NULL
    );

    if (window == NULL)
    {
        printf("Window creation failed.\n");
        glfwTerminate();
        return -1;
    }

    // Make OpenGL context active
    glfwMakeContextCurrent(window);
    

    // Print OpenGL version and renderer
    const GLubyte* version = glGetString(GL_VERSION);
    const GLubyte* renderer = glGetString(GL_RENDERER);

    printf("GL %s on %s\n", version, renderer);

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Required clear colour
        glClearColor(0.20f, 0.10f, 0.25f, 1.0f);

        // Clear colour buffer
        glClear(GL_COLOR_BUFFER_BIT);

        // Display frame
        glfwSwapBuffers(window);

        // Process window events
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}