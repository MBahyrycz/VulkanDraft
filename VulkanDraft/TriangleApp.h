#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class  TriangleApp
{
public:
	void run();
private:
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();
private:
	void createInstance();
private:
	GLFWwindow* m_Window;
	VkInstance m_Instance;
};