#include "TriangleApp.h"

#include <iostream>
#include <stdexcept>
#include <cstdlib>


void TriangleApp::run()
{
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
}

void TriangleApp::initWindow()
{
	if (!glfwInit())
	{
		std::cout << "Could not initialise GLFW window" << std::endl;
		return;
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	m_Window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}

void TriangleApp::initVulkan()
{
}

void TriangleApp::mainLoop()
{
	while (!glfwWindowShouldClose(m_Window))
	{
		glfwPollEvents();
	}
}

void TriangleApp::cleanup()
{
	glfwDestroyWindow(m_Window);
	glfwTerminate();
}
