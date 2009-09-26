//
// GLUT skeleton application - Ted Burke - 26-9-2009
//
// The glut header and library files came from Nate Robins' page:
//		http://www.xmission.com/~nate/glut.html
// The link to Nate Robins' page is on the glut page of the main OpenGL site:
//		http://www.opengl.org/resources/libraries/glut/glut_downloads.php#windows
//
// I compiled this using MinGW with the following command:
//		'gcc -o GlutSkeleton.exe main.c glut32.lib -lopengl32'
//

#include <windows.h>
#include <GL/gl.h>
#include "glut.h"

void display(void)
{
	//  Clear background
	glClear (GL_COLOR_BUFFER_BIT);

	// Set colour to white
	glColor3f (1.0, 1.0, 1.0);

	// draw a square
	glBegin(GL_POLYGON);
	glVertex3f (-0.5, -0.5, 0.0);
	glVertex3f (0.5, -0.5, 0.0);
	glVertex3f (0.5, 0.5, 0.0);
	glVertex3f (-0.5, 0.5, 0.0);
	glEnd();

	// Process the preceding OpenGL command immediately
	glFlush ();
}

void init (void) 
{
	// Set background colour to black
	glClearColor (0.0, 0.0, 0.0, 0.0);

	// Select an orthogonal projection
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.6, 1.6, -1.0, 1.0, -1.0, 1.0);
}

// Win32 application main function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int argc = 1;
	glutInit(&argc, &lpCmdLine);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(320, 200); 
	glutInitWindowPosition(100, 100);
	glutCreateWindow ("My Window Title");
	init();
	glutDisplayFunc(display); 
	glutMainLoop();
	return 0;
}
