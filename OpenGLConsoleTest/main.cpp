
#include <GL/glew.h>
#include <GLFW\glfw3.h>

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

//#include "Display.h"

using namespace std; 


int main()
{
	if (glfwInit() != true)
	{
		fprintf(stderr, "GLFW FAILED TO INIT");
		return -1;
	}
	else
	{
		fprintf(stderr, "GLFW INIT");
	}
	

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window;
	window = glfwCreateWindow(640, 480, "VACCUM", NULL, NULL);



	if (!window)
	{
		fprintf(stderr, "WINDOW FAILED TO CREATE");
		glfwTerminate();
		return -1;
	}
	else
	{
		fprintf(stderr, "WINDOW CREATED");
	}



	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK)
	{

	}

	int x;
	cin >> x;
	return 0;
}

