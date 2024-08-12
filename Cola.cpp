#include "Cola.h"
void Cola:: DibujarCola(float Angulo,int n,float x, float y, float z) {

	glPushMatrix();
	glTranslatef(x,y, z);

	glTranslatef(-0.5, 0.0, 0.0);
	glRotatef((GLfloat)Angulo, 2.0, 1.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0,1.4, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();
	
	for (int i = 0; i < n; i++) {
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef(Angulo, 0, 0, 1);
		glRotatef((GLfloat)Angulo, 0.5, 2, 0.3);
		glTranslatef(0.3, 0.4, 0.1);
		glPushMatrix();
		glScalef(1, 0.6, 1.5);
		glutSolidCube(1.0);
		glPopMatrix();
	}

	glPopMatrix();
}