#include "functions.h"
#include <math.h>
#include <glut.h>
#include <glaux.h>

unsigned int Texture[10];

float
Sun,								Mercury_Sun,
Mercury,							Venus_Sun,
Venus,								Earth_Sun,
Earth,	/*Углы поворота планет*/    Mars_Sun,		/*Углы относительно солнца*/		
Mars,								Jupiter_Sun,
Jupiter,							Saturn_Sun,
Saturn,								Uranus_Sun,
Uranus,								Neptune_Sun,
Neptune,							Pluto_Sun,
Pluto;

void Draw()
{
	GLUquadricObj *Quad = gluNewQuadric();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -100.0f);
	glRotatef(90, 0.0f, 0.0f, 1.0f);
	glRotatef(65, 0.0f, 1.0f, 0.0f);

	glPushMatrix();

	//Солнце
	glRotatef(Sun, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[0]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 1, 50, 50);
	glPopMatrix();

	glEnable(GL_LIGHTING);

	float orbite[9] = { 1.5, 2.5, 3.5, 4.5, 6.5, 8.5, 10, 12, 14 };
	//Отрисовка орбит
	for (int j = 0; j < 9; j++)
	{
		glBegin(GL_LINE_STRIP);
		for (float i = 0; i < 10; i += 0.1)
			glVertex2d(orbite[j]*cos(i), orbite[j]*sin(i));
		glEnd();
	}

	//Меркурий
	glPushMatrix();
	glRotatef(15, 0.0f, 0.0f, 1.0f);
	glRotatef(Mercury_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 1.5, 0.0);
	glRotatef(Mercury, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[1]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.25, 50, 50);
	glEnd();
	glPopMatrix();

	//Венера
	glPushMatrix();
	glRotatef(95, 0.0f, 0.0f, 1.0f);
	glRotatef(Venus_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 2.5, 0.0);
	glRotatef(Venus, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[2]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.25, 50, 50);
	glEnd();
	glPopMatrix();

	//Земля
	glPushMatrix();
	glRotatef(25, 0.0f, 0.0f, 1.0f);
	glRotatef(Earth_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 3.5, 0.0);
	glRotatef(Earth, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[3]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.35, 50, 50);
	glEnd();
	glPopMatrix();
	
	//Марс
	glPushMatrix();
	glRotatef(5, 0.0f, 0.0f, 1.0f);
	glRotatef(Mars_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 4.5, 0.0);
	glRotatef(Mars, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[4]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.35, 50, 50);
	glEnd();
	glPopMatrix();

	//Юпитер 
	glPushMatrix();
	glRotatef(90, 0.0f, 0.0f, 1.0f);
	glRotatef(Jupiter_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 6.5, 0.0);
	glRotatef(Jupiter, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[5]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.7, 50, 50);
	glEnd();
	glPopMatrix();
	
	//Сатурн
	glPushMatrix();
	glRotatef(105, 0.0f, 0.0f, 1.0f);
	glRotatef(Saturn_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 8.5, 0.0);
	glRotatef(Saturn, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[6]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.65, 50, 50);
	glEnd();
	glPopMatrix();

	//Уран
	glPushMatrix();
	glRotatef(15, 0.0f, 0.0f, 1.0f);
	glRotatef(Uranus_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 10, 0.0);
	glRotatef(Uranus, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[7]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.5, 50, 50);
	glEnd();
	glPopMatrix();
	
	//Нептун
	glPushMatrix();
	glRotatef(15, 0.0f, 0.0f, 1.0f);
	glRotatef(Neptune_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 12, 0.0);
	glRotatef(Neptune, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[8]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.5, 16, 16);
	glEnd();
	glPopMatrix();

	//Плутон
	glPushMatrix();
	glRotatef(65, 0.0f, 0.0f, 1.0f);
	glRotatef(Pluto_Sun, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 14, 0.0);
	glRotatef(Pluto, 0.0, 0.0, 1.0);
	glBindTexture(GL_TEXTURE_2D, Texture[9]);
	gluQuadricTexture(Quad, GL_TRUE);
	gluQuadricDrawStyle(Quad, GLU_FILL);
	gluSphere(Quad, 0.25, 50, 50);
	glEnd();
	glPopMatrix();

	glDisable(GL_LIGHTING);
	
	gluDeleteQuadric(Quad);

	glFlush();
	glutSwapBuffers();
}

void Timer(int)
{
	Animation();
	glutTimerFunc(10, Timer, 0);
}

void Animation()
{
	//вращение солнца 
	Sun += 0.4;
	//вращение планет вокруг своей оси
	Mercury += 1;
	Venus += 1.5;
	Earth += 3;	
	Mars += 3;
	Jupiter += 3;
	Saturn += 3;
	Uranus += 5.1;
	Neptune += 5.2;
	Pluto += 5.1;

	//вращение планет вокруг солнца
	Mercury_Sun += 0.21;
	Venus_Sun += 0.26;
	Earth_Sun += 0.24;
	Mars_Sun += 0.2;
	Jupiter_Sun += 0.16;
	Saturn_Sun += 0.18;
	Uranus_Sun += 0.11;
	Neptune_Sun += 0.13;
	Pluto_Sun += 0.1;

	Draw();
}

void LoadTexture()
{
	AUX_RGBImageRec *Texture0, *Texture1, *Texture2, *Texture3, *Texture4, *Texture5, *Texture6, *Texture7, *Texture8, *Texture9;
	Texture0 = auxDIBImageLoadA("Sun.bmp");
	Texture1 = auxDIBImageLoadA("Mercury.bmp");
	Texture2 = auxDIBImageLoadA("Venus.bmp");
	Texture3 = auxDIBImageLoadA("Earth.bmp");
	Texture4 = auxDIBImageLoadA("Mars.bmp");
	Texture5 = auxDIBImageLoadA("Jupiter.bmp");
	Texture6 = auxDIBImageLoadA("Saturn.bmp");
	Texture7 = auxDIBImageLoadA("Uranus.bmp");
	Texture8 = auxDIBImageLoadA("Neptune.bmp");
	Texture9 = auxDIBImageLoadA("Pluto.bmp");

	glGenTextures(1, &Texture[0]);
	glBindTexture(GL_TEXTURE_2D, Texture[0]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture0->sizeX, Texture0->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture0->data);

	glGenTextures(1, &Texture[1]);
	glBindTexture(GL_TEXTURE_2D, Texture[1]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture1->sizeX, Texture1->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture1->data);

	glGenTextures(1, &Texture[2]);
	glBindTexture(GL_TEXTURE_2D, Texture[2]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture2->sizeX, Texture2->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture2->data);

	glGenTextures(1, &Texture[3]);
	glBindTexture(GL_TEXTURE_2D, Texture[3]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture3->sizeX, Texture3->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture3->data);

	glGenTextures(1, &Texture[4]);
	glBindTexture(GL_TEXTURE_2D, Texture[4]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture4->sizeX, Texture4->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture4->data);

	glGenTextures(1, &Texture[5]);
	glBindTexture(GL_TEXTURE_2D, Texture[5]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture5->sizeX, Texture5->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture5->data);

	glGenTextures(1, &Texture[6]);
	glBindTexture(GL_TEXTURE_2D, Texture[6]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture6->sizeX, Texture6->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture6->data);

	glGenTextures(1, &Texture[7]);
	glBindTexture(GL_TEXTURE_2D, Texture[7]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture7->sizeX, Texture7->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture7->data);

	glGenTextures(1, &Texture[8]);
	glBindTexture(GL_TEXTURE_2D, Texture[8]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture8->sizeX, Texture8->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture8->data);

	glGenTextures(1, &Texture[9]);
	glBindTexture(GL_TEXTURE_2D, Texture[9]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, 3, Texture9->sizeX, Texture9->sizeY, GL_RGB, GL_UNSIGNED_BYTE, Texture9->data);
}

void Initialization()
{
	LoadTexture();					// Загрузка текстур
	glEnable(GL_TEXTURE_2D);		// Разрешение наложение текстуры
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	glDepthFunc(GL_LESS);
	glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
}

void Reshape(int w, int h)
{
	if (h == 0)
	{
		h = 1;
	}
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(10.0, (double)w / (double)h, 0.1, 210.0);
	glMatrixMode(GL_MODELVIEW);
	glViewport(0, 0, w, h);
}