#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat fire=0.1f;
GLfloat speed = 0.1f;
GLfloat positionEn=0.0f;
GLfloat positionFire=0.0f;


void update(int value) {

    if(positionEn < -1.0f)
        positionEn = 1.0f;



if(fire==1){

      if(positionFire>1.f){
            positionFire=0.0f;
            fire=0;
        }
        else{
        positionFire+=0.1f;
        }

}


    positionEn-=0.1f;
    position = speed;


	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{

		if (state == GLUT_DOWN )
		{
			fire =1;
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed -= 0.1f;
    break;
case 'd':
    speed += 0.1f;
    break;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -1.0f);
      glVertex2f( 0.2f, -1.0f);
      glVertex2f( 0.2f,  -0.5f);
      glVertex2f(-0.2f,  -0.5f);
   glEnd();
   glPushMatrix();
glTranslatef(0.0f,positionFire, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,  -0.5f);
   glVertex2f(0.0f, -0.3f);
   glVertex2f(-0.2f,  -0.5f);
   glEnd();
   glPopMatrix();

    glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,  -0.5f);
   glVertex2f(0.0f, -0.3f);
   glVertex2f(-0.2f,  -0.5f);
   glEnd();

   glBegin(GL_TRIANGLES);
   glVertex2f(0.2f,-0.8f);
   glVertex2f(0.3f,-0.7f);
   glVertex2f(0.2f,-0.6f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glVertex2d(-0.2f,-0.8f);
   glVertex2d(-0.3f,-0.7f);
   glVertex2d(-0.2f,-0.6f);
   glEnd();

glPopMatrix();



glPushMatrix();
glTranslatef(0.0f,positionEn, 0.0f);
    glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.8f,0.9f);
   glVertex2f(-0.7f,0.8f);
   glVertex2f(-0.6f,0.9f);

   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(0.1f,0.9f);
   glVertex2f(0.2f,0.8f);
   glVertex2f(0.3f,0.9f);

   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.2f,0.7f);
   glVertex2f(-0.3f,0.6f);
   glVertex2f(-0.4f,0.7f);

   glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(0.5f,0.7f);
   glVertex2f(0.6f,0.6f);
   glVertex2f(0.7f,0.7f);

   glEnd();
   glPopMatrix();

   glFlush();


}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
