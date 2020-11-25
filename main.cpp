#include <iostream>
#include "glfw/include/GLFW/glfw3.h"

int main(){
	
    GLFWwindow * window;
	
	window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
	
	if( !glfwInit() )    {
        	fprintf( stderr, "Failed to initialize GLFW\n" );
        	exit( EXIT_FAILURE );
   	}

	
	if (!window){
        	fprintf( stderr, "Failed to open GLFW window\n" );
        	glfwTerminate();
        	exit( EXIT_FAILURE );
    	}


	while( !glfwWindowShouldClose(window) )
    	{
        	// Swap buffers
        	glfwSwapBuffers(window);
        	glfwPollEvents();
    	}

    // Terminate GLFW
    glfwTerminate();


}
