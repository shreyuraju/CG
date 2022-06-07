#include<stdio.h>
#include<GL/glut.h>
float h=0.0,k=0.0,theta;
int ch;
void Init();
void rotate_origin();
void rotate_fixed_point();
void draw_triangle();
void display_about_origin();
void display_about_fixed_point();
void rotate_origin() {
	glRotatef(theta,0,0,1);
}
void rotate_fixed_point() {
	glTranslatef(h,k,0);
	glRotatef(theta,0,0,1);
	glTranslatef(-h,-k,0);
}
void draw_triangle() {
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(100,100);
	glVertex2f(400,100);
	glVertex2f(250,350);
	glEnd();
}
void display_about_origin() {
	draw_triangle();
	rotate_origin();
	draw_triangle();
	glLoadIdentity();
	glFlush();
}
void display_about_fixed_point() {
	draw_triangle();
	rotate_fixed_point();
	draw_triangle();
	glLoadIdentity();
	glFlush();
}
void myInit() {
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-500.0,500.0,-500.0,500.0);
	glMatrixMode(GL_MODELVIEW);
}
void main(int argc, char *argv[]) {
	printf("1->Rotation about origin\n2->Rotation about fixed point\nEnter your choice:");
		scanf("%d",&ch);
	printf("Enter the rotation angle:");
		scanf("%f",&theta);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	if(ch==1) {
		glutCreateWindow("Rotation of a triangle w.r.t origin-4MT20CS401");
		glutDisplayFunc(display_about_origin);
	}
	else if(ch==2) {
		printf("Enter the point(x,y) point:");
			scanf("%f%f",&h,&k);
		glutCreateWindow("Rotation of triangle w.r.t fixed point-4MT20CS401");
		glutDisplayFunc(display_about_fixed_point);
	}
	else
		printf("Invalid choice\n");
	myInit();
	glutMainLoop();
}
