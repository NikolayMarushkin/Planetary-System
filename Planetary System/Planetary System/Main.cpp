#include "functions.h"
#include <glut.h>
#include <glaux.h>


int main(int argc, char* argv[])
{
	float Width = 1200, Height = 500;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 500);
	glutCreateWindow("Planetary System");
	glClearColor(1.0, 1.0, 1.0, 1.0);
    glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(Draw);
	Initialization();

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);

	//для солнца
	float Light0_position[] = { 0.0, 0.0, -100, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, Light0_position);

	float Ambient[] = { 1.0, 1.0, 1.0, 0.0 };
	glLightfv(GL_LIGHT1, GL_AMBIENT, Ambient);

	float Light1_position[] = { 1, 0.0, -1.0, 0.0 };
	glLightfv(GL_LIGHT1, GL_POSITION, Light1_position);

	float Light0_difuse[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, Light0_difuse);

	//Константы затухания
	float Const1[] = { 0.3 }; 
	glLightfv(GL_LIGHT0, GL_CONSTANT_ATTENUATION, Const1);

	float Const2[] = { 0.001 }; 
	glLightfv(GL_LIGHT0, GL_LINEAR_ATTENUATION, Const2);

	float Constt3[] = { 0.0008 };	
	glLightfv(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, Constt3);
	
	float Light2_position[] = { -100.0, 100.0, -20.0, 1.0 };
	glLightfv(GL_LIGHT1, GL_POSITION, Light2_position);

	Timer();
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;
}