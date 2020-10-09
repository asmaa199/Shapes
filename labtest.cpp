#include <Windows.h>
#include <GL\glew.h>
#include<GL\glut.h>
#include<GL/gl.h>
#include <GL\freeglut.h>
#include <iostream>

using namespace std;

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);//window color is white
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(0.0, 300.0, 0.0, 300.0);//Define the cartesian(x min, x max,y min, y max)

}


void triangles() {
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.5, 0.0);
	glPointSize(5.0);

	glBegin(GL_LINES);
	glVertex2i(100,100);
	glVertex2i(150,200);
	glVertex2i(150,200);
	glVertex2i(200, 100);
	glVertex2i(200, 100);
	glVertex2i(100, 100);

	glEnd();

	glBegin(GL_LINES);
	glVertex2i(100, 170);
	glVertex2i(200, 170);
	glVertex2i(200, 170);
	glVertex2i(150, 70);
	glVertex2i(150, 70);
	glVertex2i(100, 170);

	glEnd();
	glFlush();
	
}



int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Triangle");

	init();
	glutDisplayFunc(triangles);



	glutMainLoop();
	return 0;
}
