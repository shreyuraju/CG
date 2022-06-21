
#include<stdio.h>
#include<GL/glut.h>
void myInit() {
	glClearColor(1.0,1.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}
void fish()
{
		int x=80;
		//body
     glColor3f(1.0,0.0,0.0);
     glBegin(GL_POLYGON);
     glVertex2f(270,350);
     glVertex2f(300,325);
     glVertex2f(370,350);
     glVertex2f(300,375);
     glEnd();

		//tail
     glBegin(GL_POLYGON);
     glVertex2f(360,350);
     glColor3f(0.0,1.0,0.0);
     glVertex2f(405,370);
     glVertex2f(395,350);
     glVertex2f(405,327);
     glEnd();

//upper fin
  	   glBegin(GL_TRIANGLES);
  	   glColor3f(0.0,0.0,1.0);
  	   glVertex2f(302,373);
  	   glColor3f(1.0,0.0,0.0);
		glVertex2f(340,409);
		glVertex2f(320,360);
  	   glEnd();


//down fin
    	glBegin(GL_TRIANGLES);
    	glColor3f(1.0,1.0,0.0);
    	glVertex2f(302,328);
     	glColor3f(1.0,0.0,0.0);
		glVertex2f(340,300);
		glVertex2f(320,340);
     	glEnd();
//eye
     glColor3f(0.0,0.0,0.0);
     glPointSize(5.0);
     glBegin(GL_POINTS);
     glVertex2f(285,355);
     glEnd();
     glFlush();
}
void main(int argc, char *argv[]) {
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Displaying lineStrip");
	glutInitWindowPosition(0,0);
	glutInitWindowSize(800,800);
	myInit();
	glutDisplayFunc(fish);
	glutMainLoop();
}
