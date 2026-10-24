import glfw
from OpenGL.GL import *

# Start GLFW
if not glfw.init():
    raise SystemExit("GLFW initialization failed")

# Create 800 x 600 window
window = glfw.create_window(800, 600, "HCI & Computer Graphics - Lab 1", None, None)
if not window:
    glfw.terminate()
    raise SystemExit("Window creation failed")

# Make OpenGL context active
glfw.make_context_current(window)

# Print OpenGL version and renderer
print("GL %s on %s" % (glGetString(GL_VERSION).decode(),
                       glGetString(GL_RENDERER).decode()))

# Main loop
while not glfw.window_should_close(window):
    # Clear colour (dark purple, my own colour)
    glClearColor(0.20, 0.10, 0.25, 1.0)

    # Clear colour buffer
    glClear(GL_COLOR_BUFFER_BIT)

    # Display frame
    glfw.swap_buffers(window)

    # Process window events
    glfw.poll_events()

glfw.terminate()
