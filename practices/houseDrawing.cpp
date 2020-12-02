#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>

float radius,twoPI;
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

//main_wall
glColor3ub (170, 140, 87);
glBegin(GL_POLYGON);
glVertex2i(350,300);
glVertex2i(350,100);
glVertex2i(700,100);
glVertex2d(700,300);
glEnd();
//wall_line
glColor3ub(0,0,0);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2d(350,240);
glVertex2d(700,240);

glVertex2d(350,200);
glVertex2d(700,200);

glVertex2d(350,150);
glVertex2d(700,150);

glLineWidth(5);
glVertex2d(350,98);
glVertex2d(690,98);
glEnd();





//window
glColor3ub(255,255,255);
glBegin(GL_POLYGON);

glVertex2d(425,250);
glVertex2d(425,175);
glVertex2d(475,175);
glVertex2d(475,250);
glEnd();

glColor3ub(0, 0, 0);
glLineWidth(2);
glBegin(GL_LINE_LOOP);
glVertex2d(425,250);
glVertex2d(425,175);
glVertex2d(475,175);
glVertex2d(475,250);
glEnd();

glColor3ub(0, 0, 0);
glLineWidth(2);
glBegin(GL_LINE_LOOP);
glVertex2d(428,247);
glVertex2d(428,178);
glVertex2d(472,178);
glVertex2d(472,247);
glEnd();
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d(428,247);
glVertex2d(428,178);
glVertex2d(472,178);
glVertex2d(472,247);
glEnd();

glColor3ub(255, 247, 107);
glBegin(GL_POLYGON);
glVertex2d(431,244);
glVertex2d(431,215);
glVertex2d(469,215);
glVertex2d(469,244);
glEnd();

//window2
glColor3ub(255,255,255);
glBegin(GL_POLYGON);

glVertex2d(425+125,250);
glVertex2d(425+125,175);
glVertex2d(475+125,175);
glVertex2d(475+125,250);
glEnd();

glColor3ub(0, 0, 0);
glLineWidth(2);
glBegin(GL_LINE_LOOP);
glVertex2d(425+125,250);
glVertex2d(425+125,175);
glVertex2d(475+125,175);
glVertex2d(475+125,250);
glEnd();

glColor3ub(0, 0, 0);
glLineWidth(2);
glBegin(GL_LINE_LOOP);
glVertex2d(428+125,247);
glVertex2d(428+125,178);
glVertex2d(472+125,178);
glVertex2d(472+125,247);
glEnd();
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d(428+125,247);
glVertex2d(428+125,178);
glVertex2d(472+125,178);
glVertex2d(472+125,247);
glEnd();

glColor3ub(255, 247, 107);
glBegin(GL_POLYGON);
glVertex2d(431+125,244);
glVertex2d(431+125,215);
glVertex2d(469+125,215);
glVertex2d(469+125,244);
glEnd();



//mainRoof
glColor3ub(115, 69, 34);
glBegin(GL_POLYGON);
glVertex2d(250,450);
glVertex2d(360,290);
glVertex2d(725,290);
glVertex2d(600,450);
glEnd();



glColor3ub(193, 187, 182);
glBegin(GL_QUADS);
glVertex2d(0,40);
glVertex2d(50,40);
glVertex2d(50,150);
glVertex2d(0,150);
glEnd();
glBegin(GL_QUADS);
glVertex2d(50,40);
glVertex2d(100,40);
glVertex2d(100,160);
glVertex2d(50,160);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINES);
glVertex2d(50,160);
glVertex2d(50,40);

//roofLine

glColor3ub(0,0,0);
glBegin(GL_LINES);
glVertex2d(260,430);
glVertex2d(640,430);

glVertex2d(285,400);
glVertex2d(640,400);

glVertex2d(300,375);
glVertex2d(658,375);

glVertex2d(312,350);
glVertex2d(678,350);

glVertex2d(338,325);
glVertex2d(695,325);
glEnd();

glColor3ub(115, 69, 34);
glBegin(GL_POLYGON);
glVertex2d(250,450);
glVertex2d(150,300);
glVertex2d(155,300);
glVertex2d(255,445);
glEnd();
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d(255,445);
glVertex2d(155,300);
glVertex2d(180,300);
glVertex2d(265,430);

glEnd();
glColor3ub(145, 116, 71);
glBegin(GL_POLYGON);
glVertex2d(265,430);
glVertex2d(180,300);
glVertex2d(180,100);
glVertex2d(350,100);
glVertex2d(350,300);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINES);
glVertex2d(245,400);
glVertex2d(283,400);

glVertex2d(222,365);
glVertex2d(307,365);

glVertex2d(200,330);
glVertex2d(330,330);


glEnd();

glColor3ub(145, 116, 71);
glBegin(GL_QUADS);
glVertex2d(180,175);
glVertex2d(100,175);
glVertex2d(100,100);
glVertex2d(180,100);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex2d(180,175);
glVertex2d(100,175);
glVertex2d(100,100);
glVertex2d(180,100);
glEnd();

glColor3ub(114, 69, 34);
glBegin(GL_QUADS);
glVertex2d(180,280);
glVertex2d(150,250);
glVertex2d(350,250);
glVertex2d(350,280);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex2d(180,280);
glVertex2d(150,250);
glVertex2d(350,250);
glVertex2d(350,280);
glEnd();

glColor3ub(110, 86, 66);
glBegin(GL_QUADS);
glVertex2d(210,230);
glVertex2d(210,100);
glVertex2d(270,100);
glVertex2d(270,230);
glEnd();


glColor3ub(0,0,0);
glBegin(GL_LINES);
glVertex2d(350,280);
glVertex2d(325,250);

glVertex2d(350,100);
glVertex2d(175,100);
glLineWidth(4);
glVertex2d(210,230);
glVertex2d(210,100);

glVertex2d(210,230);
glVertex2d(270,230);


glEnd();


glColor3ub(204, 189, 180);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2d(300,250);
glVertex2d(300,100);

glVertex2d(165,250);
glVertex2d(165,100);


glEnd();

glColor3ub(145, 116, 71);
glBegin(GL_QUADS);
glVertex2d(350,100);
glVertex2d(75,100);
glVertex2d(75,60);
glVertex2d(350,60);

glVertex2d(350,80);
glVertex2d(50,80);
glVertex2d(50,60);
glVertex2d(350,60);
glEnd();



glColor3ub(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex2d(250,100);
glVertex2d(75,100);
glVertex2d(75,80);
glVertex2d(250,80);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2d(225,80);
glVertex2d(50,80);
glVertex2d(50,60);
glVertex2d(225,60);
glEnd();

glColor3ub(170, 140, 87);
glBegin(GL_QUADS);
glVertex2d(700,100);
glVertex2d(350,100);
glVertex2d(350,60);
glVertex2d(700,60);
glEnd();



glColor3ub(0,0,0);
glLineWidth(4);
glBegin(GL_LINES);

glVertex2d(350,100);
glVertex2d(700,100);
glEnd();

glLineWidth(2);
glBegin(GL_LINE_LOOP);
glVertex2d(700,100);
glVertex2d(600,100);
glVertex2d(600,60);
glVertex2d(700,60);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2d(600,100);
glVertex2d(500,100);
glVertex2d(500,60);
glVertex2d(600,60);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2d(500,100);
glVertex2d(400,100);
glVertex2d(400,60);
glVertex2d(500,60);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(400,100);
glVertex2d(350,100);
glVertex2d(350,60);
glVertex2d(400,60);
glEnd();
////bellow stairs
glColor3ub(193, 187, 182);
glBegin(GL_QUADS);
glVertex2d(700,60);
glVertex2d(25,60);
glVertex2d(25,40);
glVertex2d(700,40);
glEnd();
glBegin(GL_QUADS);
glVertex2d(700,40);
glVertex2d(0,40);
glVertex2d(0,20);
glVertex2d(700,20);
glEnd();

glLineWidth(2);
glColor3ub(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex2d(25,60);
glVertex2d(25,40);
glVertex2d(200,40);
glVertex2d(200,60);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(0,40);
glVertex2d(0,20);
glVertex2d(175,20);
glVertex2d(175,40);
glEnd();




glPointSize(3);
glColor3ub(229, 154, 111);
glBegin(GL_POINTS);
glVertex2d(50,300);
glVertex2d(60,378);
glVertex2d(69,400);
glVertex2d(47,359);
glVertex2d(43,323);
glVertex2d(100,200);
glVertex2d(78,400);
glVertex2d(83,489);
glVertex2d(250,450);
glVertex2d(289,450);
glVertex2d(380,450);
glVertex2d(470,450);
glVertex2d(350,450);
glVertex2d(361,450);
glVertex2d(500,450);
glVertex2d(524,450);
glVertex2d(555,450);

glVertex2d(250,478);
glVertex2d(289,498);
glVertex2d(380,466);
glVertex2d(470,500);
glVertex2d(350,518);
glVertex2d(361,540);
glVertex2d(500,512);
glVertex2d(524,479);
glVertex2d(555,533);
glVertex2d(600,450);
glVertex2d(667,490);
glVertex2d(670,410);
glVertex2d(683,400);


glVertex2d(0,410);
glVertex2d(10,400);
glVertex2d(20,395);
glVertex2d(30,390);
glVertex2d(50,395);

glEnd();

glPointSize(2);
glBegin(GL_POINTS);
glVertex2d(255,450);
glVertex2d(287,450);
glVertex2d(382,450);
glVertex2d(475,450);
glVertex2d(355,450);
glVertex2d(368,450);
glVertex2d(512,450);
glVertex2d(529,450);
glVertex2d(533,450);

glVertex2d(100,200);
glVertex2d(119,208);
glVertex2d(76,170);
glVertex2d(88,180);
glVertex2d(98,233);
glVertex2d(101,287);
glVertex2d(200,50);

glVertex2d(258,457);
glVertex2d(287,500);
glVertex2d(293,530);
glVertex2d(301,547);
glVertex2d(312,467);
glVertex2d(334,498);
glVertex2d(356,472);
glVertex2d(378,485);
glVertex2d(397,522);
glVertex2d(409,502);
glVertex2d(466,509);
glVertex2d(508,516);

glPointSize(1);
glVertex2d(55,315);
glVertex2d(80,343);
glVertex2d(71,230);

glVertex2d(59,308);
glVertex2d(78,370);
glVertex2d(55,455);
glVertex2d(47,340);
glVertex2d(43,333);
glVertex2d(78,200);
glVertex2d(33,400);
glVertex2d(69,489);

glVertex2d(265,450);
glVertex2d(333,450);
glVertex2d(378,450);
glVertex2d(455,450);
glVertex2d(330,450);
glVertex2d(390,450);
glVertex2d(555,450);
glVertex2d(405,450);
glVertex2d(569,450);

glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 730.0, 0.0, 550.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (730, 550);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
