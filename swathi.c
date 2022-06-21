#include<GL/glut.h>
#include<string.h>
#include <math.h>


int fishStatus1 = 1;
float fish1X = 0;
float fish1Y = 0;
void drawfish1(int);

int fishStatus2 = 1;
float fish2X = 0;
float fish2Y = 0;
void drawfish2(int);
void tree2();
void scene2();
void man2();
float move2, angle2;

int fishStatus3 = 1;
float fish3X = 0;
float fish3Y = 0;
void fishBoat3(int);
void chinku3();
void rinku3();

int boatStatus4 = 1;
float boat4X = 0;
float boat4Y = 0;
void drawBoat4(int);
void tree4();
void scene4();
void man4();
float move, angle;

int fishStatus5 = 1;
float fish5X = 0;
float fish5Y = 0;
void drawfish5(int);
void tree5();
void scene5();
void man5();

int fishStatus6 = 1;
float fish6X = 0;
float fish6Y = 0;
void drawfish6(int);



int i=0;
int id1,id2,id3,id4,id5,id6,id7,id8,id9,id10,id11,id12,id13,id14;
char * str;
void mydisplay(void)
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBegin(GL_POLYGON);
	glColor3f(0.439,0.502,0.565);
	glVertex2f(0,500);
	glVertex2f(500,500);
	glVertex2f(1000,500);
	glEnd();
	char str1[]="MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING";
	glColor3f(0,0,1);
	glRasterPos2f(200,950);
	for(i=0;i<strlen(str1);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }

	char str2[]="MOODBIDRI,MANGALORE";
	glColor3f(0,0,1);
	glRasterPos2f(335,900);
	for(i=0;i<strlen(str2);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }

	char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	glColor3f(1,0,1);
	glRasterPos2f(220,820);
	for(i=0;i<strlen(str3);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }

	char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
	glColor3f(1,0.5,0);
	glRasterPos2f(280,770);
	for(i=0;i<strlen(str4);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }

	char str5[]="MINI PROJECT";
	glColor3f(1,1,1);
	glRasterPos2f(390,690);
	for(i=0;i<strlen(str5);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }

	char str6[]="ON";
	glColor3f(1,0,0);
	glRasterPos2f(440,640);
	for(i=0;i<strlen(str6);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }

	char str16[]="THE STORY OF THREE FISHES";
	glColor3f(1,1,0);
	glRasterPos2f(320,580);
	for(i=0;i<strlen(str16);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[i]);
        }

	char str7[]="TEAM MEMBERS:";
	glColor3f(1,0,0);
	glRasterPos2f(0,400);
	for(i=0;i<strlen(str7);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
        }

	char str8[]="P ASHWINI 4MT18CS060";
	glColor3f(2,0.5,1);
	glRasterPos2f(0,350);
	for(i=0;i<strlen(str8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }

	char str9[]="ROSHANYA S 4MT18CSO76";
	glColor3f(2,0.5,1);
	glRasterPos2f(0,300);
	for(i=0;i<strlen(str9);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);
        }

	char str10[]="6th SEM";
	glColor3f(0,1,1);
	glRasterPos2f(0,250);
	for(i=0;i<strlen(str10);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);
        }

	char str11[]="PROJECT GUIDE:";
	glColor3f(1,0,0);
	glRasterPos2f(820,400);
	for(i=0;i<strlen(str11);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);
        }

	char str12[]="AISHWARYA M BHAT";
	glColor3f(2,0.5,1);
	glRasterPos2f(820,350);
	for(i=0;i<strlen(str12);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);
        }
    
    char str13[]="SUNITHA N V";
	glColor3f(2,0.5,1);
	glRasterPos2f(820,300);
	for(i=0;i<strlen(str13);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);
        }


	char str14[]="DEPT OF CSE";
	glColor3f(0,1,1);
	glRasterPos2f(820,250);
	for(i=0;i<strlen(str14);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
        }

	char str15[]="ENTER 'A or a' TO START";
	glColor3f(0,1,0);
	glRasterPos2f(350,30);
	for(i=0;i<strlen(str15);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[i]);
        }
	glFlush();
}


void display14()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="Moral:";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char str2[]="Believe in yourself rather than fate";
	glColor3f(1,1,1);
	glRasterPos2f(350,700);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}
	glFlush();
	//glutKeyboardFunc(key13);
	glFlush();
	glutPostRedisplay();
}
void key14(unsigned char key,int x,int y)
{
	if(key=='M'||key=='m')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id13);
		glutInitWindowSize(1500,750);
		id14=glutCreateWindow("Three fishes");
		glutDisplayFunc(display14);
	}
}

void DrawCircle6(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * (ii) / (num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void drawfish6(int i)
{
	glPushMatrix();

glClear(GL_COLOR_BUFFER_BIT);

//minku

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,0.0,0.3);
	glVertex2i(740,700);
	glVertex2i(820,780);
	glVertex2i(1020,700);
	glVertex2i(800,660);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(1.0,1.0,0.0);
	glVertex2i(1020,700);
	glVertex2i(1060,740);
	glVertex2i(1040,700);
	glVertex2i(1060,660);
	glVertex2i(1020,700);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(0.0,1.0,1.0);
	glVertex2i(820,780);
	glVertex2i(840,800);
	glVertex2i(980,716);
	glVertex2i(820,780);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(0.2,0.5,0.7);
	glVertex2i(800,660);
	glVertex2i(840,700);
	glVertex2i(820,664);
	glVertex2i(800,660);
	glEnd();

	glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle6(810, 750, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle6(810, 750, 2, 1000);	 	
	glEnd();


	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	glutSwapBuffers();
	glFlush();

}
void keyboard6(unsigned char key, int x, int y)
{

	switch (key) {

	case 's':		//boat start
	case 'S':
		fishStatus6 = 1;
		break;
	case 'r':		//boat stop
	case 'R':
		fishStatus6 = 0;
		break;

	default:
		break;
	}
}

void fish6()
{
	if (fishStatus6 == 1)
	{
		fish6X -= .3;
		fish6Y-=.05;
	}
	if (fish6X>1000)
	{
		fish6X = -600;
	}
	glPushMatrix();
	glTranslatef(fish6X, fish6Y, 0);
	drawfish6(1);
	glPopMatrix();
}

void display13(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	fish6();
	char str8[]="PRESS 'M or m' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glutKeyboardFunc(key14);
	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}
void key13(unsigned char key,int x,int y)
{
	if(key=='L'||key=='l')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id11);
		glutInitWindowSize(1500,750);
		id13=glutCreateWindow("Three fishes");
		glutDisplayFunc(display13);
	}
}
void display12()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="Chutki finally swam back to the lake but Monu died being with the other fishes";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}

	char str8[]="PRESS 'L or l' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key13);
	glFlush();
	glutPostRedisplay();
}

void key12(unsigned char key,int x,int y)
{
	if(key=='K'||key=='k')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id11);
		glutInitWindowSize(1500,750);
		id12=glutCreateWindow("Three fishes");
		glutDisplayFunc(display12);
	}
}
void DrawCircle5(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * (ii) / (num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void tree5()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Tree
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(435, 344);
	glVertex2i(450, 345);
	glVertex2i(450, 550);
	glVertex2i(435, 550);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle5(415, 545, 50, 1000); // 4
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle5(430, 600, 50, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle5(460, 550, 50, 1000);
	
	glBegin(GL_POLYGON); //Tree2 extra
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(735, 324);
	glVertex2i(750, 320);
	glVertex2i(750, 550);
	glVertex2i(735, 550);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle5(715, 545, 50, 1000); //leaves extra
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle5(730, 600, 50, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle5(760, 550, 50, 1000);
   	
	glBegin(GL_POLYGON); //grass1extra
	glColor3f(0.0,1.0,0.0);
	glVertex2i(435,349); 
	glVertex2i(450,340);
	glVertex2i(475,370); 
	glEnd();
	glBegin(GL_POLYGON);	
	glVertex2i(435,340); 
	glVertex2i(450,340); 
	glVertex2i(425,370);
	glEnd();
	glBegin(GL_POLYGON); 
    glVertex2i(435,349); 
	glVertex2i(450,340); 
	glVertex2i(445,390);
	glEnd();
	glBegin(GL_POLYGON);	
	glVertex2i(435,340); 
	glVertex2i(450,340); 
	glVertex2i(460,390);
	glEnd();
		
    glBegin(GL_POLYGON);//grass2extra
    glColor3f(0.0,1.0,0.0);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(305,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(255,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(275,350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(290,350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(260,345);
    glEnd();
    
     glBegin(GL_POLYGON);//grass3extra
    glColor3f(0.0,1.0,0.0);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(105,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(55,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(75,250);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(90,250);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(60,245);
    glEnd();
    
    
    glBegin(GL_POLYGON);//grass4extra
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(575,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(525,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(545,210);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(560,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(530,210);
    glEnd();
    
    glBegin(GL_POLYGON);//grass5extra
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(785,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(735,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(755,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(770,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(745,330);
    glEnd();

    glBegin(GL_POLYGON);//grass6extra
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1075,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1025,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1045,250);
    glEnd();
     glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1060,250);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1030,245);
    glEnd();
    
    

	glBegin(GL_POLYGON);//sunextra
	glColor3f(1.0, 0.6, 0.0);
	DrawCircle5(900, 1050, 50, 1000);	 	
	glEnd();
	
    glBegin(GL_POLYGON); //cloudextra	
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(215, 1045, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(230,1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(260, 1050, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(245, 1100, 60, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(285, 1085, 60, 1000);
	glEnd();  
	
	glBegin(GL_POLYGON); //cloud extra
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(515, 1045, 50, 1000); 
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(530, 1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(560, 1050, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(600, 1050, 50, 1000); 
	glEnd();
	
	glBegin(GL_POLYGON); //cloudextra	
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(1115, 1045, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(1130,1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(1160, 1050, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle5(1145, 1100, 60, 1000);
	
	glBegin(GL_POLYGON); // man eye	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(455, 260, 3, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(479, 260, 3, 1000);
	glEnd();
	
	
    glBegin(GL_POLYGON); // man nose	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(467, 248, 3, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(467, 252, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(467, 254, 2, 1000);	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(467, 256, 1, 1000); 
	glEnd();
	
	glBegin(GL_POLYGON); // man mouth	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(461, 240, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(462, 237, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(463, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(464, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(465, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(466, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(467, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(468, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(469, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(470, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(471, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(472, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(473, 237, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(474, 240, 2, 1000);
	glEnd();
	

	glPopMatrix();

}

void scene5()
{
	glPushMatrix();

	glBegin(GL_POLYGON); // Sky
	glColor3f(0.4, 0.5, 1.0);
	glVertex2i(0, 1200);
	glVertex2i(1200, 1200);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	glBegin(GL_POLYGON); // Middle ground
	glColor3f(0.0, 0.7, 0.0);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 350);
	glVertex2i(600, 345);
	glVertex2i(800, 330);
	glVertex2i(1000, 300);
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);

	glEnd();


	glBegin(GL_POLYGON); // River
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(0, 150);
	glVertex2i(200, 150);
	glVertex2i(400, 150);
	glVertex2i(600, 150);
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(800, 150);
	glVertex2i(1000, 150);
	glVertex2i(1200, 150);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	tree5();

//Mountain
glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(00,280);
glVertex2f(160,800);
glVertex2f(350,344);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(340,344);
glVertex2f(500,800);
glVertex2f(650,340);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(640,340);
glVertex2f(800,800);
glVertex2f(950,307);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(940,307);
glVertex2f(1100,800);
glVertex2f(1250,262);
glEnd();

    glBegin(GL_POLYGON); //House
	glColor3f(0.9, 0.7, 0.1);
	glVertex2i(350, 344);
	glVertex2i(350, 460);
	glVertex2i(430, 460);
	glVertex2i(430, 344);
	glEnd();


	glBegin(GL_POLYGON); //House
	glColor3f(0.9, 0.0, 0.0);
	glVertex2i(340, 460);
	glVertex2i(390, 500);
	glVertex2i(440, 460);
	glEnd();

	glBegin(GL_POLYGON); //Door
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(370, 344);
	glVertex2i(370, 430);
	glVertex2i(410, 430);
	glVertex2i(410, 344);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 344);
	glVertex2i(390, 430);
	glEnd();
	
		glBegin(GL_POLYGON); //house1
glColor3f(0.9,0.2,0.5);
glVertex2f(10,250);
glVertex2f(10,330);
glVertex2f(110,330);
glVertex2f(110,250);
glEnd();
glBegin(GL_POLYGON); //window
glColor3f(0.0,0.0,0.0);
glVertex2f(28,288);
glVertex2f(28,312);
glVertex2f(54,312);
glVertex2f(54,288);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2,0.7,1.0);
glVertex2f(30,290);
glVertex2f(30,310);
glVertex2f(40,310);
glVertex2f(40,290);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.2,0.7,1.0);
glVertex2f(42,290);
glVertex2f(42,310);
glVertex2f(52,310);
glVertex2f(52,290);
glEnd();

glBegin(GL_POLYGON); //top
glColor3f(0.8,0.0,0.0);
glVertex2f(70,330);
glVertex2f(110,330);
glVertex2f(90,400);
glEnd();

glBegin(GL_POLYGON); //door
glColor3f(0.0,0.0,0.0);
glVertex2f(80,250);
glVertex2f(80,310);
glVertex2f(100,310);
glVertex2f(100,250);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.3,0.1,0.0);
glVertex2f(10,330);
glVertex2f(30,400);
glVertex2f(90,400);
glVertex2f(70,330);
glEnd();
	glBegin(GL_POLYGON); //circle	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle5(90, 356, 7, 900);

	glPopMatrix();


//BIRDS
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(40, 964);
	glVertex2i(50, 1000);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(40, 964);
	glVertex2i(30, 1000);
	glEnd();
glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 844);
	glVertex2i(400, 880);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 844);
	glVertex2i(380, 880);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(680, 944);
	glVertex2i(690, 980);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(680, 944);
	glVertex2i(670, 980);
	glEnd();
	
		glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(440, 1144);
	glVertex2i(450, 1180);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(440, 1144);
	glVertex2i(430, 1180);
	glEnd();
		glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(1000, 864);
	glVertex2i(1010, 900);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(1000, 864);
	glVertex2i(990, 900);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(1004, 1144);
	glVertex2i(1014, 1180);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(1004, 1144);
	glVertex2i(994, 1180);
	glEnd();

	
glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.4, 0.1);
	glVertex2i(250, 20);
	glVertex2i(220, 100);
	glVertex2i(550, 100);
	glVertex2i(500, 20);
	glEnd();

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.7, 0.8, 0.1);
	glVertex2i(240, 100);
	glVertex2i(240, 110);
	glVertex2i(250, 100);
	glVertex2i(265, 105);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.1, 0.1);
	glVertex2i(265, 103);
	glVertex2i(280, 99);
	glVertex2i(290, 110);
	glVertex2i(280, 108);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(290,110);
	glVertex2i(301,115);
	glVertex2i(305,108);
	glVertex2i(301,110);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(270,110);
	glVertex2i(280,100);
	glVertex2i(300,110);
	glVertex2i(280,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(1.0,1.0,0.0);
	glVertex2i(300,110);
	glVertex2i(310,120);
	glVertex2i(305,110);
	glVertex2i(310,100);
	glVertex2i(300,100);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.0,1.0,1.0);
	glVertex2i(230,100);
	glVertex2i(240,100);
	glVertex2i(235,120);
	glVertex2i(230,115);
	glVertex2i(250,102);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.50,0.03,0.70);
	glVertex2i(220,100);
	glVertex2i(230,100);
	glVertex2i(240,110);
	glVertex2i(230,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	//glBegin(GL_POLYGON); //draw tail
	glColor3f(2.50,0.03,0.70);
	glVertex2i(250,110);
	glVertex2i(245,100);
	glVertex2i(230,105);
	glVertex2i(245,110);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glColor3f(2.50,0.03,0.70);
	glVertex2i(230,105);
	glVertex2i(220,100);
	glVertex2i(225,105);
	glVertex2i(220,110);
	glVertex2i(230,105);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.6,0.0,0.3);
	glVertex2i(250,110);
	glVertex2i(260,100);
	glVertex2i(280,110);
	glVertex2i(260,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.6,0.0,0.3);
	glVertex2i(280,110);
	glVertex2i(290,120);
	glVertex2i(295,110);
	glVertex2i(290,100);
	glVertex2i(280,100);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.2, 0.8, 3.0);
	glVertex2i(240, 130);
	glVertex2i(250, 120);
	glVertex2i(260, 130);
	glVertex2i(250, 140);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.2,0.8,3.0);
	glVertex2i(260,130);
	glVertex2i(270,120);
	glVertex2i(265,130);
	glVertex2i(270,140);
	glVertex2i(260,130);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(2.2, 0.8, 3.0);
	glVertex2i(240, 110);
	glVertex2i(250, 100);
	glVertex2i(260, 110);
	glVertex2i(250, 120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(2.2,0.8,0.0);
	glVertex2i(260,110);
	glVertex2i(270,100);
	glVertex2i(265,110);
	glVertex2i(270,130);
	glVertex2i(260,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.2, 2.8, 0.0);
	glVertex2i(220, 110);
	glVertex2i(230, 100);
	glVertex2i(240, 110);
	glVertex2i(230, 120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.2,2.8,0.0);
	glVertex2i(240,110);
	glVertex2i(250,100);
	glVertex2i(245,110);
	glVertex2i(250,130);
	glVertex2i(240,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.2, 0.08, 0.0);
	glVertex2i(240, 110);
	glVertex2i(250, 100);
	glVertex2i(260, 110);
	glVertex2i(250, 120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);


	glBegin(GL_POLYGON); // draw body
	glColor3f(0.2,0.08,0.0);
	glVertex2i(260,110);
	glVertex2i(270,100);
	glVertex2i(265,110);
	glVertex2i(270,130);
	glVertex2i(260,110);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

//man code
	glBegin(GL_POLYGON); // lungi
	glColor3f(0.8,0.0,0.0);
	glVertex2i(440, 140);
	glVertex2i(430,100);
	glVertex2i(457.5, 100);
	glVertex2i(465, 120);
	glVertex2i(465,140);
	glEnd();


	glBegin(GL_POLYGON); // v shape
	glColor3f(0.8,0.0,0.0);
	glVertex2i(465,120);
	glVertex2i(472.5, 100);
	glVertex2i(500, 100);
	glVertex2i(490, 140);
	glVertex2i(465, 140);
	glEnd();

	glBegin(GL_POLYGON); // bannyan
	glColor3f(0.0,0.0,0.0);
	glVertex2i(440,140);
	glVertex2i(440, 220);
	glVertex2i(450, 220);
	glVertex2i(450, 200);
	glVertex2i(490, 200);
	glVertex2i(490, 140);
	glEnd();
	glBegin(GL_POLYGON); // bannyan
	glColor3f(0.0,0.0,0.0);
	glVertex2i(480, 200);
	glVertex2i(480, 220);
	glVertex2i(490, 220);
	glVertex2i(490, 200);
	glEnd();

	glBegin(GL_POLYGON); // shoulder
	glColor3f(1.5,0.6,0.3);
	glVertex2i(450, 220);
	glVertex2i(451, 220);
	glVertex2i(453, 222);
	glVertex2i(454, 222);
	glVertex2i(456, 223);
	glVertex2i(460, 223.5);
	glVertex2i(463, 224);
	glVertex2i(465, 226);
	glVertex2i(466, 223.5);
	glVertex2i(467,223);
	glVertex2i(470, 222);
	glVertex2i(474, 222);
	glVertex2i(476, 221);
	glVertex2i(477, 221);
	glVertex2i(479, 220);
	glVertex2i(480, 220);
	glVertex2i(480, 200);
	glVertex2i(450, 200);
	glVertex2i(450, 220);
	glEnd();

	glBegin(GL_POLYGON); // left hand
	glColor3f(1.5,0.6,0.3);
	glVertex2i(445, 220);
	glVertex2i(440, 220);
	glVertex2i(430, 120);
	glVertex2i(440, 145);
	glVertex2i(445, 220);
	glEnd();

	glBegin(GL_POLYGON); // right hand
	glColor3f(1.5,0.6,0.3);
	glVertex2i(485, 220);
	glVertex2i(490, 220);
	glVertex2i(500, 120);
	glVertex2i(490, 145);
	glVertex2i(485, 220);
	glEnd();

	glBegin(GL_POLYGON); // neck
	glColor3f(1.5,0.6,0.3);
	glVertex2i(458, 220);
	glVertex2i(475, 220);
	glVertex2i(475, 235);
	glVertex2i(458, 235);
	glEnd();

	glBegin(GL_POLYGON); // head
	glColor3f(1.5,0.6,0.3);
	glVertex2i(448, 230);
	glVertex2i(485, 230);
	glVertex2i(490, 235);
	glVertex2i(490, 250);
	glVertex2i(485, 265);
	glVertex2i(450, 265);
	glVertex2i(445, 250);
	glVertex2i(445, 238);
	glVertex2i(448, 230);
	glEnd();

	glBegin(GL_POLYGON); // hair
	glColor3f(0.0,0.0,0.0);
	glVertex2i(485, 265);
	glVertex2i(450, 265);
	glVertex2i(445, 275);
	glVertex2i(490, 275);
	glEnd();

		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(0, 20);
	glVertex2i(20, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(30, 50);
	glVertex2i(50, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(60, 80);
	glVertex2i(80, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(90, 110);
	glVertex2i(110, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(120, 140);
	glVertex2i(140, 140);
		glEnd();
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(150, 20);
	glVertex2i(170, 20);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(180, 50);
	glVertex2i(200, 50);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(210, 80);
	glVertex2i(225, 80);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(310, 140);
	glVertex2i(330, 140);
	glEnd();
			

	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(400, 110);
	glVertex2i(420, 110);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(530, 110);
	glVertex2i(550, 110);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(560, 140);
	glVertex2i(580, 140);
		glEnd();	

	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(550, 20);
	glVertex2i(570, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(580, 50);
	glVertex2i(600, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(610, 80);
	glVertex2i(630, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(640, 110);
	glVertex2i(660, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(670, 140);
	glVertex2i(690, 140);
		glEnd();
		
		
		
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(700, 20);
	glVertex2i(720, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(730, 50);
	glVertex2i(750, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(760, 80);
	glVertex2i(780, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(790, 110);
	glVertex2i(810, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(820, 140);
	glVertex2i(840, 140);
		glEnd();
		
		
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(850, 20);
	glVertex2i(870, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(880, 50);
	glVertex2i(900, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(930, 80);
	glVertex2i(950, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(960, 110);
	glVertex2i(980, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(990, 140);
	glVertex2i(1010, 140);
		glEnd();
	
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1020, 20);
	glVertex2i(1040, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1050, 50);
	glVertex2i(1070, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1080, 80);
	glVertex2i(1100, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1110, 110);
	glVertex2i(1130, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1140, 140);
	glVertex2i(1160, 140);
		glEnd();
 glPopMatrix();


}
void drawfish5(int i)
{
	//glPushMatrix();
	glBegin(GL_POLYGON); // dropping fish
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(420, 120);
	glVertex2i(425, 127);
	glVertex2i(420, 115);
	glVertex2i(415, 127);
	glEnd();

	glBegin(GL_POLYGON); // dropping fish
	glColor3f(0.0, 0.0, 0.4);
	glVertex2i(420, 115);
	glVertex2i(413, 103);
	glVertex2i(420, 95);
	glVertex2i(427, 103);
	glEnd();
	//glPushMatrix();
	glutSwapBuffers();
}


void keyboard5(unsigned char key, int x, int y)
{

	switch (key) {

	case 's':		//boat start
	case 'S':
		fishStatus5 = 1;
		break;
	case 'r':		//boat stop
	case 'R':
		fishStatus5 = 0;
		break;

	default:
		break;
	}
}

void fish5()
{
	if (fishStatus5 == 1)
	{
		fish5Y -= .3;
	}
	glPushMatrix();
	glTranslatef(fish5X, fish5Y, 0);
	drawfish5(1);
	glPopMatrix();
}



void display11(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	scene5();
	tree5();
	fish5();
	char str8[]="PRESS 'K or k' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(590,30);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glutKeyboardFunc(key12);
	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}
void key11(unsigned char key,int x,int y)
{
	if(key=='J'||key=='j')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id10);
		glutInitWindowSize(1500,750);
		id11=glutCreateWindow("Three fishes");
		glutDisplayFunc(display11);
	}
}

void display10()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="Among all the fishes Chutki the smartest acted as if it is dead,";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char str2[]="the fisherman observed Chutki and threw it back in to the lake,";
	glColor3f(1,1,1);
	glRasterPos2f(310,750);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}
	char str3[]="thinking that it is dead and useless ";
	glColor3f(1,1,1);
	glRasterPos2f(310,700);
	for(i=0;i<strlen(str3);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	}

	char str8[]="PRESS 'J or j' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key11);
	glFlush();
	glutPostRedisplay();
}
void key10(unsigned char key,int x,int y)
{
	if(key=='I'||key=='i')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id9);
		glutInitWindowSize(1500,750);
		id10=glutCreateWindow("Three fishes");
		glutDisplayFunc(display10);
	}
}

void DrawCircle4(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * (ii) / (num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void tree4()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Tree
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(435, 344);
	glVertex2i(450, 345);
	glVertex2i(450, 550);
	glVertex2i(435, 550);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle4(415, 545, 50, 1000); // 4
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle4(430, 600, 50, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle4(460, 550, 50, 1000);
	
	glBegin(GL_POLYGON); //Tree2 extra
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(735, 324);
	glVertex2i(750, 320);
	glVertex2i(750, 550);
	glVertex2i(735, 550);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle4(715, 545, 50, 1000); //leaves extra
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle4(730, 600, 50, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle4(760, 550, 50, 1000);
   	
	glBegin(GL_POLYGON); //grass1extra
	glColor3f(0.0,1.0,0.0);
	glVertex2i(435,349); 
	glVertex2i(450,340);
	glVertex2i(475,370); 
	glEnd();
	glBegin(GL_POLYGON);	
	glVertex2i(435,340); 
	glVertex2i(450,340); 
	glVertex2i(425,370);
	glEnd();
	glBegin(GL_POLYGON); 
    glVertex2i(435,349); 
	glVertex2i(450,340); 
	glVertex2i(445,390);
	glEnd();
	glBegin(GL_POLYGON);	
	glVertex2i(435,340); 
	glVertex2i(450,340); 
	glVertex2i(460,390);
	glEnd();
		
    glBegin(GL_POLYGON);//grass2extra
    glColor3f(0.0,1.0,0.0);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(305,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(255,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(275,350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(290,350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(260,345);
    glEnd();
    
     glBegin(GL_POLYGON);//grass3extra
    glColor3f(0.0,1.0,0.0);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(105,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(55,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(75,250);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(90,250);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(70,200);
    glVertex2i(80,200);
    glVertex2i(60,245);
    glEnd();
    
    
    glBegin(GL_POLYGON);//grass4extra
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(575,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(525,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(545,210);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(560,190);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,160);
    glVertex2i(550,160);
    glVertex2i(530,210);
    glEnd();
    
    glBegin(GL_POLYGON);//grass5extra
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(785,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(735,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(755,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(770,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(745,330);
    glEnd();

    glBegin(GL_POLYGON);//grass6extra
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1075,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1025,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1045,250);
    glEnd();
     glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1060,250);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,200);
    glVertex2i(1050,200);
    glVertex2i(1030,245);
    glEnd();
    
    

	glBegin(GL_POLYGON);//sunextra
	glColor3f(1.0, 0.6, 0.0);
	DrawCircle4(900, 1050, 50, 1000);	 	
	glEnd();
	
	
	
    glBegin(GL_POLYGON); //cloudextra	
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(215, 1045, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(230,1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(260, 1050, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(245, 1100, 60, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(285, 1085, 60, 1000);
	glEnd();  
	
	
	
	glBegin(GL_POLYGON); //cloud extra
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(515, 1045, 50, 1000); 
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(530, 1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(560, 1050, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(600, 1050, 50, 1000); 
	glEnd();
	
	glBegin(GL_POLYGON); //cloudextra	
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(1115, 1045, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(1130,1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(1160, 1050, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle4(1145, 1100, 60, 1000);
	
	glPopMatrix();

}

void scene4()
{
	glPushMatrix();

	glBegin(GL_POLYGON); // Sky
	glColor3f(0.4, 0.5, 1.0);
	glVertex2i(0, 1200);
	glVertex2i(1200, 1200);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	glBegin(GL_POLYGON); // Middle ground
	glColor3f(0.0, 0.7, 0.0);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 355);
	glVertex2i(600, 345);
	glVertex2i(800, 330);
	glVertex2i(1000, 300);
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);

	glEnd();


	glBegin(GL_POLYGON); // River
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(0, 150);
	glVertex2i(200, 150);
	glVertex2i(400, 150);
	glVertex2i(600, 150);
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(800, 150);
	glVertex2i(1000, 150);
	glVertex2i(1200, 150);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	tree4();

	//Mountain
glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(00,280);
glVertex2f(160,800);
glVertex2f(350,344);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(340,344);
glVertex2f(500,800);
glVertex2f(650,340);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(640,340);
glVertex2f(800,800);
glVertex2f(950,307);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.3,0.0);
glVertex2f(940,307);
glVertex2f(1100,800);
glVertex2f(1250,262);
glEnd();


	glBegin(GL_POLYGON); //House
	glColor3f(0.9, 0.7, 0.1);
	glVertex2i(350, 344);
	glVertex2i(350, 460);
	glVertex2i(430, 460);
	glVertex2i(430, 344);
	glEnd();


	glBegin(GL_POLYGON); //House
	glColor3f(0.9, 0.0, 0.0);
	glVertex2i(340, 460);
	glVertex2i(390, 500);
	glVertex2i(440, 460);
	glEnd();

	glBegin(GL_POLYGON); //Door
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(370, 344);
	glVertex2i(370, 430);
	glVertex2i(410, 430);
	glVertex2i(410, 344);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 344);
	glVertex2i(390, 430);
	glEnd();
	
	glBegin(GL_POLYGON); //house1
glColor3f(0.9,0.2,0.5);
glVertex2f(10,250);
glVertex2f(10,330);
glVertex2f(110,330);
glVertex2f(110,250);
glEnd();
glBegin(GL_POLYGON); //window
glColor3f(0.0,0.0,0.0);
glVertex2f(28,288);
glVertex2f(28,312);
glVertex2f(54,312);
glVertex2f(54,288);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2,0.7,1.0);
glVertex2f(30,290);
glVertex2f(30,310);
glVertex2f(40,310);
glVertex2f(40,290);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.2,0.7,1.0);
glVertex2f(42,290);
glVertex2f(42,310);
glVertex2f(52,310);
glVertex2f(52,290);
glEnd();

glBegin(GL_POLYGON); //top
glColor3f(0.8,0.0,0.0);
glVertex2f(70,330);
glVertex2f(110,330);
glVertex2f(90,400);
glEnd();

glBegin(GL_POLYGON); //door
glColor3f(0.0,0.0,0.0);
glVertex2f(80,250);
glVertex2f(80,310);
glVertex2f(100,310);
glVertex2f(100,250);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.3,0.1,0.0);
glVertex2f(10,330);
glVertex2f(30,400);
glVertex2f(90,400);
glVertex2f(70,330);
glEnd();
	glBegin(GL_POLYGON); //circle	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(90, 356, 7, 900);

	glPopMatrix();

}


void drawBoat4(int i)
{
	glPushMatrix();
//BIRDS
glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 844);
	glVertex2i(400, 880);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 844);
	glVertex2i(380, 880);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(240, 944);
	glVertex2i(250, 980);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(240, 944);
	glVertex2i(230, 980);
	glEnd();
	
		glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(440, 1144);
	glVertex2i(450, 1180);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(440, 1144);
	glVertex2i(430, 1180);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(640, 864);
	glVertex2i(650, 900);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(640, 864);
	glVertex2i(630, 900);
	glEnd();
		glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(690, 1064);
	glVertex2i(700, 1100);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(690, 1064);
	glVertex2i(680, 1100);
	glEnd();
		glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(970, 1064);
	glVertex2i(980, 1100);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(970, 1064);
	glVertex2i(960, 1100);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.4, 0.1);
	glVertex2i(250, 20);
	glVertex2i(220, 100);
	glVertex2i(550, 100);
	glVertex2i(500, 20);
	glEnd();

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.7, 0.8, 0.1);
	glVertex2i(240, 100);
	glVertex2i(240, 110);
	glVertex2i(250, 100);
	glVertex2i(265, 105);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.1, 0.1);
	glVertex2i(265, 103);
	glVertex2i(280, 99);
	glVertex2i(290, 110);
	glVertex2i(280, 108);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(290,110);
	glVertex2i(301,115);
	glVertex2i(305,108);
	glVertex2i(301,110);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(270,110);
	glVertex2i(280,100);
	glVertex2i(300,110);
	glVertex2i(280,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(1.0,1.0,0.0);
	glVertex2i(300,110);
	glVertex2i(310,120);
	glVertex2i(305,110);
	glVertex2i(310,100);
	glVertex2i(300,100);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.0,1.0,1.0);
	glVertex2i(230,100);
	glVertex2i(240,100);
	glVertex2i(235,120);
	glVertex2i(230,115);
	glVertex2i(250,102);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.50,0.03,0.70);
	glVertex2i(220,100);
	glVertex2i(230,100);
	glVertex2i(240,110);
	glVertex2i(230,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	//glBegin(GL_POLYGON); //draw tail
	glColor3f(2.50,0.03,0.70);
	glVertex2i(250,110);
	glVertex2i(245,100);
	glVertex2i(230,105);
	glVertex2i(245,110);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glColor3f(2.50,0.03,0.70);
	glVertex2i(230,105);
	glVertex2i(220,100);
	glVertex2i(225,105);
	glVertex2i(220,110);
	glVertex2i(230,105);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.6,0.0,0.3);
	glVertex2i(250,110);
	glVertex2i(260,100);
	glVertex2i(280,110);
	glVertex2i(260,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.6,0.0,0.3);
	glVertex2i(280,110);
	glVertex2i(290,120);
	glVertex2i(295,110);
	glVertex2i(290,100);
	glVertex2i(280,100);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.2, 0.8, 3.0);
	glVertex2i(240, 130);
	glVertex2i(250, 120);
	glVertex2i(260, 130);
	glVertex2i(250, 140);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.2,0.8,3.0);
	glVertex2i(260,130);
	glVertex2i(270,120);
	glVertex2i(265,130);
	glVertex2i(270,140);
	glVertex2i(260,130);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(2.2, 0.8, 3.0);
	glVertex2i(240, 110);
	glVertex2i(250, 100);
	glVertex2i(260, 110);
	glVertex2i(250, 120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(2.2,0.8,0.0);
	glVertex2i(260,110);
	glVertex2i(270,100);
	glVertex2i(265,110);
	glVertex2i(270,130);
	glVertex2i(260,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.2, 2.8, 0.0);
	glVertex2i(220, 110);
	glVertex2i(230, 100);
	glVertex2i(240, 110);
	glVertex2i(230, 120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.2,2.8,0.0);
	glVertex2i(240,110);
	glVertex2i(250,100);
	glVertex2i(245,110);
	glVertex2i(250,130);
	glVertex2i(240,120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

	glBegin(GL_POLYGON); // draw fish
	glColor3f(0.2, 0.08, 0.0);
	glVertex2i(240, 110);
	glVertex2i(250, 100);
	glVertex2i(260, 110);
	glVertex2i(250, 120);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);


	glBegin(GL_POLYGON); // draw body
	glColor3f(0.2,0.08,0.0);
	glVertex2i(260,110);
	glVertex2i(270,100);
	glVertex2i(265,110);
	glVertex2i(270,130);
	glVertex2i(260,110);
	glEnd();
	glPushMatrix();
	glRotatef(angle,0.0,0.0,0.0);

//man code
	glBegin(GL_POLYGON); // lungi
	glColor3f(0.8,0.0,0.0);
	glVertex2i(440, 140);
	glVertex2i(430,100);
	glVertex2i(457.5, 100);
	glVertex2i(465, 120);
	glVertex2i(465,140);
	glEnd();


	glBegin(GL_POLYGON); // v shape
	glColor3f(0.8,0.0,0.0);
	glVertex2i(465,120);
	glVertex2i(472.5, 100);
	glVertex2i(500, 100);
	glVertex2i(490, 140);
	glVertex2i(465, 140);
	glEnd();

	glBegin(GL_POLYGON); // bannyan
	glColor3f(0.0,0.0,0.0);
	glVertex2i(440,140);
	glVertex2i(440, 220);
	glVertex2i(450, 220);
	glVertex2i(450, 200);
	glVertex2i(490, 200);
	glVertex2i(490, 140);
	glEnd();
	glBegin(GL_POLYGON); // bannyan
	glColor3f(0.0,0.0,0.0);
	glVertex2i(480, 200);
	glVertex2i(480, 220);
	glVertex2i(490, 220);
	glVertex2i(490, 200);
	glEnd();

	glBegin(GL_POLYGON); // shoulder
	glColor3f(1.5,0.6,0.3);
	glVertex2i(450, 220);
	glVertex2i(451, 220);
	glVertex2i(453, 222);
	glVertex2i(454, 222);
	glVertex2i(456, 223);
	glVertex2i(460, 223.5);
	glVertex2i(463, 224);
	glVertex2i(465, 226);
	glVertex2i(466, 223.5);
	glVertex2i(467,223);
	glVertex2i(470, 222);
	glVertex2i(474, 222);
	glVertex2i(476, 221);
	glVertex2i(477, 221);
	glVertex2i(479, 220);
	glVertex2i(480, 220);
	glVertex2i(480, 200);
	glVertex2i(450, 200);
	glVertex2i(450, 220);
	glEnd();

	glBegin(GL_POLYGON); // left hand
	glColor3f(1.5,0.6,0.3);
	glVertex2i(445, 220);
	glVertex2i(440, 220);
	glVertex2i(430, 120);
	glVertex2i(440, 145);
	glVertex2i(445, 220);
	glEnd();

	glBegin(GL_POLYGON); // right hand
	glColor3f(1.5,0.6,0.3);
	glVertex2i(485, 220);
	glVertex2i(490, 220);
	glVertex2i(500, 120);
	glVertex2i(490, 145);
	glVertex2i(485, 220);
	glEnd();

	glBegin(GL_POLYGON); // neck
	glColor3f(1.5,0.6,0.3);
	glVertex2i(458, 220);
	glVertex2i(475, 220);
	glVertex2i(475, 235);
	glVertex2i(458, 235);
	glEnd();

	glBegin(GL_POLYGON); // head
	glColor3f(1.5,0.6,0.3);
	glVertex2i(448, 230);
	glVertex2i(485, 230);
	glVertex2i(490, 235);
	glVertex2i(490, 250);
	glVertex2i(485, 265);
	glVertex2i(450, 265);
	glVertex2i(445, 250);
	glVertex2i(445, 238);
	glVertex2i(448, 230);
	glEnd();
	
	 glBegin(GL_POLYGON); // man eye	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(455, 260, 3, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(479, 260, 3, 1000);
	glEnd();
	
	
    glBegin(GL_POLYGON); // man nose	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(467, 248, 3, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(467, 252, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(467, 254, 2, 1000);	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(467, 256, 1, 1000); 
	glEnd();
	
	glBegin(GL_POLYGON); // man mouth	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(461, 240, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(462, 237, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(463, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(464, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(465, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(466, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(467, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(468, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(469, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(470, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(471, 236, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(472, 236, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(473, 237, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle4(474, 240, 2, 1000);
	glEnd();
	

	glBegin(GL_POLYGON); // hair
	glColor3f(0.0,0.0,0.0);
	glVertex2i(485, 265);
	glVertex2i(450, 265);
	glVertex2i(445, 275);
	glVertex2i(490, 275);
	glEnd();
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(0, 20);
	glVertex2i(20, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(30, 50);
	glVertex2i(50, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(60, 80);
	glVertex2i(80, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(90, 110);
	glVertex2i(110, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(120, 140);
	glVertex2i(140, 140);
		glEnd();
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(150, 20);
	glVertex2i(170, 20);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(180, 50);
	glVertex2i(200, 50);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(210, 80);
	glVertex2i(225, 80);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(310, 140);
	glVertex2i(330, 140);
	glEnd();
			

	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(400, 110);
	glVertex2i(420, 110);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(530, 110);
	glVertex2i(550, 110);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(560, 140);
	glVertex2i(580, 140);
		glEnd();	

	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(550, 20);
	glVertex2i(570, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(580, 50);
	glVertex2i(600, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(610, 80);
	glVertex2i(630, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(640, 110);
	glVertex2i(660, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(670, 140);
	glVertex2i(690, 140);
		glEnd();
		
		
		
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(700, 20);
	glVertex2i(720, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(730, 50);
	glVertex2i(750, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(760, 80);
	glVertex2i(780, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(790, 110);
	glVertex2i(810, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(820, 140);
	glVertex2i(840, 140);
		glEnd();
		
		
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(850, 20);
	glVertex2i(870, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(880, 50);
	glVertex2i(900, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(930, 80);
	glVertex2i(950, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(960, 110);
	glVertex2i(980, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(990, 140);
	glVertex2i(1010, 140);
		glEnd();
	
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1020, 20);
	glVertex2i(1040, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1050, 50);
	glVertex2i(1070, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1080, 80);
	glVertex2i(1100, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1110, 110);
	glVertex2i(1130, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1140, 140);
	glVertex2i(1160, 140);
		glEnd();
	
	
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-180, 20);
	glVertex2i(-200, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-150, 50);
	glVertex2i(-170, 50);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-120, 80);
	glVertex2i(-140, 80);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-90, 110);
	glVertex2i(-110, 110);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(-60, 140);
	glVertex2i(-80, 140);
		glEnd();
			
	
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-420, 20);
	glVertex2i(-440, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-390, 40);
	glVertex2i(-410, 40);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-360, 60);
	glVertex2i(-380, 60);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-330, 80);
	glVertex2i(-350, 80);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(-300, 100);
	glVertex2i(-320, 100);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-270, 120);
	glVertex2i(-290, 120);
		glEnd();
			glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-240, 140);
	glVertex2i(-260, 140);
	glEnd();
	glFlush();
	glPopMatrix();


}
void keyboard4(unsigned char key, int x, int y)
{

	switch (key) {

	case 's':		//boat start
	case 'S':
		boatStatus4 = 1;
		break;
	case 'r':		//boat stop
	case 'R':
		boatStatus4 = 0;
		break;

	default:
		break;
	}
}

void boat4()
{
	if (boatStatus4 == 1)
	{
		boat4X += 0.1;
	}
	if (boat4X>1000)
	{
		boat4X = -600;
	}
	glPushMatrix();
	glTranslatef(boat4X, boat4Y, 0);
	drawBoat4(1);
	glPopMatrix();
}



void display9(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	scene4();
	tree4();
	boat4();
	char str8[]="PRESS 'I or i' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glutKeyboardFunc(key10);
	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}


void key9(unsigned char key,int x,int y)
{
	if(key=='H'||key=='h')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id8);
		glutInitWindowSize(1500,750);
		id9=glutCreateWindow("Three fishes");
		glutDisplayFunc(display9);
	}
}

void display8()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="The next morning the fisherman came and caught a lot of fishes,";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char str2[]="among them were the Monu and Chutki.";
	glColor3f(1,1,1);
	glRasterPos2f(310,750);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}

	char str8[]="PRESS 'H or h' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key9);
	glFlush();
	glutPostRedisplay();
}
void key8(unsigned char key,int x,int y)
{
	if(key=='G'||key=='g')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id7);
		glutInitWindowSize(1500,750);
		id8=glutCreateWindow("Three fishes");
		glutDisplayFunc(display8);
	}
}


void DrawCircle3(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * (ii) / (num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void chinku3()
{

	glPushMatrix();

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.75,0.5,0.9);
	glVertex2i(40,200);
	glVertex2i(120,280);
	glVertex2i(320,200);
	glVertex2i(100,160);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(1.0,0.0,1.0);
	glVertex2i(320,200);
	glVertex2i(360,240);
	glVertex2i(340,200);
	glVertex2i(360,160);
	glVertex2i(320,200);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(0.5,0.6,0.0);
	glVertex2i(120,280);
	glVertex2i(140,300);
	glVertex2i(280,216);
	glVertex2i(120,280);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(0.5,0.0,0.6);
	glVertex2i(100,160);
	glVertex2i(140,200);
	glVertex2i(120,164);
	glVertex2i(100,160);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.6);
	glVertex2i(100,240);
	glVertex2i(120,260);
	glVertex2i(90,230);
	glEnd();
		glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle3(100, 250, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle3(100, 250, 2, 1000);	 	
	glEnd();
	glPopMatrix();
}

void rinku3()
{
	glPushMatrix();
	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,0.0,0.1);
	glVertex2i(40,1000);
	glVertex2i(120,1080);
	glVertex2i(320,1000);
	glVertex2i(100,960);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(1.0,1.0,0.0);
	glVertex2i(320,1000);
	glVertex2i(360,1040);
	glVertex2i(340,1000);
	glVertex2i(360,960);
	glVertex2i(320,1000);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(0.0,1.0,1.0);
	glVertex2i(120,1080);
	glVertex2i(140,1100);
	glVertex2i(280,1016);
	glVertex2i(120,1080);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(0.2,0.5,0.7);
	glVertex2i(100,960);
	glVertex2i(140,1000);
	glVertex2i(120,964);
	glVertex2i(100,960);
	glEnd();
	
	glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle3(100, 1050, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle3(100, 1050, 2, 1000);	 	
	glEnd();
	glPopMatrix();

}


void drawfish3(int i)
{

//minku

    
	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(740,700);
	glVertex2i(820,780);
	glVertex2i(1020,700);
	glVertex2i(800,660);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.0,1.0,0.0);
	glVertex2i(1020,700);
	glVertex2i(1060,740);
	glVertex2i(1040,700);
	glVertex2i(1060,660);
	glVertex2i(1020,700);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(1.0,0.0,0.0);
	glVertex2i(820,780);
	glVertex2i(840,800);
	glVertex2i(980,716);
	glVertex2i(820,780);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(1.0,0.0,0.0);
	glVertex2i(800,660);
	glVertex2i(840,700);
	glVertex2i(820,664);
	glVertex2i(800,660);
	glEnd();
		glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle3(810, 750, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle3(810, 750, 2, 1000);	 	
	glEnd();

	glutSwapBuffers();

}
void keyboard3(unsigned char key, int x, int y)
{

	switch (key) {

	case 's':		//fish fast
	case 'S':
		fishStatus3 = 2;
		break;
	case 'r':		//fish stop
	case 'R':
		fishStatus3 = 0;
		break;

	default:
		break;
	}
}

void fish3()
{
	if (fishStatus3 == 1)
	{
		fish3X -= .1;
	}
	if(fishStatus3==2)
	{
		fish3X-=1.0;
	}
	glPushMatrix();

	glTranslatef(fish3X, fish3Y, 0);
	drawfish3(1);
	glPopMatrix();
	glutSwapBuffers();
}


void display7(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	chinku3();
	rinku3();
	fish3();
	char str8[]="PRESS 'G or g' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glutKeyboardFunc(key8);
	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}

void key7(unsigned char key,int x,int y)
{
	if(key=='F'||key=='f')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id6);
		glutInitWindowSize(1500,750);
		id7=glutCreateWindow("Three fishes");
		glutDisplayFunc(display7);
	}
}
void display6()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="Sonu quickly swam to where Monu and Chutki were and told them what he heard.";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char str2[]="He also told that they must swim away through the canal to escape.";
	glColor3f(1,1,1);
	glRasterPos2f(310,750);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}

	char str3[]="For which the rest of the fishes refused.";
	glColor3f(1,1,1);
	glRasterPos2f(310,700);
	for(i=0;i<strlen(str3);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	}
	char str4[]="PRESS 'F or f' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str4);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key7);
	glFlush();
	glutPostRedisplay();
}
void key6(unsigned char key,int x,int y)
{
	if(key=='E'||key=='e')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id5);
		glutInitWindowSize(1500,750);
		id6=glutCreateWindow("Three fishes");
		glutDisplayFunc(display6);
	}
}
void DrawCircle2(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * (ii) / (num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void tree2()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Tree
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(435, 344);
	glVertex2i(450, 345);
	glVertex2i(450, 550);
	glVertex2i(435, 550);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle2(415, 545, 50, 1000); // leaves
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle2(430, 600, 50, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle2(460, 550, 50, 1000);
	
	
	glBegin(GL_POLYGON); //Tree2 extra
	glColor3f(1.2, 0.5, 0.4);
	glVertex2i(735, 324);
	glVertex2i(750, 320);
	glVertex2i(750, 550);
	glVertex2i(735, 550);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle2(715, 545, 50, 1000); //leaves extra
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle2(730, 600, 50, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle2(760, 550, 50, 1000);
   	
	glBegin(GL_POLYGON); //grass1extra
	glColor3f(0.0,1.0,0.0);
	glVertex2i(435,349); 
	glVertex2i(450,340);
	glVertex2i(475,370); 
	glEnd();
	glBegin(GL_POLYGON);	
	glVertex2i(435,340); 
	glVertex2i(450,340); 
	glVertex2i(425,370);
	glEnd();
	glBegin(GL_POLYGON); 
    glVertex2i(435,349); 
	glVertex2i(450,340); 
	glVertex2i(445,390);
	glEnd();
	glBegin(GL_POLYGON);	
	glVertex2i(435,340); 
	glVertex2i(450,340); 
	glVertex2i(460,390);
	glEnd();
		
    glBegin(GL_POLYGON);//grass2extra
    glColor3f(0.0,1.0,0.0);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(305,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(255,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(275,350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(290,350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270,300);
    glVertex2i(280,300);
    glVertex2i(260,345);
    glEnd();
    
    glBegin(GL_POLYGON);//grass3extra
    glVertex2i(540,250);
    glVertex2i(550,250);
    glVertex2i(575,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,250);
    glVertex2i(550,250);
    glVertex2i(525,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,250);
    glVertex2i(550,250);
    glVertex2i(545,300);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,250);
    glVertex2i(550,250);
    glVertex2i(560,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(540,250);
    glVertex2i(550,250);
    glVertex2i(530,300);
    glEnd();
    
    glBegin(GL_POLYGON);//grass4extra
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(785,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(735,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(755,330);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(770,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(745,330);
    glEnd();

    glBegin(GL_POLYGON);//grass5extra
    glVertex2i(1040,250);
    glVertex2i(1050,250);
    glVertex2i(1075,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,250);
    glVertex2i(1050,250);
    glVertex2i(1025,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,250);
    glVertex2i(1050,250);
    glVertex2i(1045,280);
    glEnd();
     glBegin(GL_POLYGON);
    glVertex2i(1040,250);
    glVertex2i(1050,250);
    glVertex2i(1060,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1040,250);
    glVertex2i(1050,250);
    glVertex2i(1030,280);
    glEnd();
    
    

	glBegin(GL_POLYGON);//moonextra
	glColor3f(1.0, 1.0, 0.6);
	DrawCircle2(900, 1050, 50, 1000);	 	
	glEnd();
	
	
	
    glBegin(GL_POLYGON); //cloudextra	
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(215, 1045, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(230,1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(260, 1050, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(245, 1100, 60, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(285, 1085, 60, 1000);
	glEnd();  
	
	
	
	glBegin(GL_POLYGON); //cloud extra
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(515, 1045, 50, 1000); 
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(530, 1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(560, 1050, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(600, 1050, 50, 1000); 
	glEnd();
	
	glBegin(GL_POLYGON); //cloudextra	
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(1115, 1045, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(1130,1000, 50, 1000);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(1160, 1050, 50, 900);
	glColor3f(0.7, 0.7, 0.7);
	DrawCircle2(1145, 1100, 60, 1000);
	

   	glBegin(GL_POLYGON); // stars extra
	glColor3f(1.0, 1.0, 1.0);	
	DrawCircle2(50, 900, 1, 1000); 
	glColor3f(1.0, 1.0, 1.0);	
	DrawCircle2(995, 850, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);	
	DrawCircle2(620, 750, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);	
	DrawCircle2(945, 665, 2, 1000); 
	glColor3f(1.08, 1.0, 1.0);	
	DrawCircle2(1000, 1065, 1, 1000); 
	glColor3f(1.0, 1.0, 1.0);	
	DrawCircle2(1050, 450, 2, 1000); 	
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(850, 750, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(250, 800, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(1100, 1150, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(650, 1100, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(300, 470, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(120, 1050, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(420, 1180, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(140, 720, 1, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(380, 1050, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(400, 900, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(612, 920, 1, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(870, 960, 3, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(500, 1150, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(520, 720, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(550, 500, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(920, 1180, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(30, 550, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
    DrawCircle2(30, 1080, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
    DrawCircle2(750, 850, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(760, 1080, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(1150, 680, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(850, 400, 2, 1000); 
    glEnd();
    
    
    glBegin(GL_POLYGON); // man eye	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(164, 575, 3, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(194, 575, 3, 1000);
	glEnd();
	
	
    glBegin(GL_POLYGON); // man nose	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(179, 561, 3, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(179, 565, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(179, 567, 2, 1000);	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(179, 569, 1, 1000); 
	glEnd();
	
	glBegin(GL_POLYGON); // man mouth	
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(173, 540, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(174, 537, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(175, 536, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(176, 536, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(177, 536, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(178, 536, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(179, 536, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(180, 536, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(181, 536, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(182, 536, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(183, 536, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(184, 536, 2, 1000);
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(185, 537, 2, 1000); 
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(186, 540, 2, 1000);
	glEnd();
	

	
	glPopMatrix();
	
}

void scene2()
{
	glPushMatrix();

	glBegin(GL_POLYGON); // Sky
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(0, 1200);
	glVertex2i(1200, 1200);
	glColor3f(0.0, 0.0, 0.8);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();
	

	

	glBegin(GL_POLYGON); // Middle ground
	glColor3f(0.0, 0.7, 0.0);
	glVertex2i(0, 100);
	glVertex2i(0, 280);
	glVertex2i(200, 330);
	glVertex2i(400, 350);
	glVertex2i(600, 330);
	glVertex2i(800, 320);
	glVertex2i(1000, 300);
	glVertex2i(1200, 270);
	glVertex2i(1200, 100);

	glEnd();
		

	glBegin(GL_POLYGON); // River
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(0, 250);
	glVertex2i(200, 250);
	glVertex2i(400, 250);
	glVertex2i(600, 250);
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(800, 250);
	glVertex2i(1000, 250);
	glVertex2i(1200, 250);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	tree2();	
	
	
	glBegin(GL_POLYGON); //House
	glColor3f(0.9, 0.7, 0.1);
	glVertex2i(350, 344);
	glVertex2i(350, 460);
	glVertex2i(430, 460);
	glVertex2i(430, 344);
	glEnd();


	glBegin(GL_POLYGON); //House
	glColor3f(0.9, 0.0, 0.0);
	glVertex2i(340, 460);
	glVertex2i(390, 500);
	glVertex2i(440, 460);
	glEnd();

	glBegin(GL_POLYGON); //Door
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(370, 344);
	glVertex2i(370, 430);
	glVertex2i(410, 430);
	glVertex2i(410, 344);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(390, 344);
	glVertex2i(390, 430);
	glEnd();

	
	
	glBegin(GL_POLYGON); // draw dress
	glColor3f(0.0,0.0,0.1);
	glVertex2i(140,400);
	glVertex2i(120,250);
	glVertex2i(160,250);
	glVertex2i(180,360);
	glVertex2i(200,250);
	glVertex2i(240,250);
	glVertex2i(220,400);



	glEnd();

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.75,0.8,0.9);
	glVertex2i(140,400);
	glVertex2i(140,520);
	glVertex2i(220,520);
	glVertex2i(220,400);
	glEnd();

	glBegin(GL_POLYGON); // draw left hand
	glColor3f(1.5,0.6,0.3);
	glVertex2i(140,500);
	glVertex2i(120,440);
	glVertex2i(110,420);
	glVertex2i(100,450);
	glVertex2i(140,520);
	glEnd();



	glBegin(GL_POLYGON); // draw right hand
	glColor3f(1.5,0.6,0.3);
	glVertex2i(220,520);
	glVertex2i(260,450);
	glVertex2i(250,420);
	glVertex2i(240,440);
	glVertex2i(220,500);
	glEnd();




	glBegin(GL_POLYGON); // draw head
	glColor3f(1.7,0.6,0.3);
	glVertex2i(160,520);
	glVertex2i(150,540);
	glVertex2i(150,580);
	glVertex2i(160,600);
	glVertex2i(200,600);
	glVertex2i(210,580);
	glVertex2i(210,540);
	glVertex2i(200,520);
	//glVertex2i(220,300);
	
	glEnd();

	glBegin(GL_POLYGON); // draw hair
	glColor3f(0.0,0.0,0.0);
	glVertex2i(160,600);
	glVertex2i(150,620);
	glVertex2i(210,620);
	glVertex2i(200,600);
	glEnd();
	glPopMatrix();

}




void drawfish2(int i)
{

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(740,100);
	glVertex2i(820,130);
	glVertex2i(1020,100);
	glVertex2i(800,80);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.0,1.0,0.0);
	glVertex2i(1020,100);
	glVertex2i(1060,120);
	glVertex2i(1040,100);
	glVertex2i(1060,80);
	glVertex2i(1020,100);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(1.0,0.0,0.0);
	glVertex2i(820,130);
	glVertex2i(840,150);
	glVertex2i(980,106);
	glVertex2i(820,130);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(1.0,0.0,0.0);
	glVertex2i(800,80);
	glVertex2i(840,100);
	glVertex2i(820,84);
	glVertex2i(800,80);
	glEnd();
	
	glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(815, 120, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(815, 120, 2, 1000);	 	
	glEnd();
	
	
    glBegin(GL_POLYGON); // stars extra
	glColor3f(1.0, 1.0, 1.0);	
	DrawCircle2(50, 850, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);		
	DrawCircle2(250, 750, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(1100, 1150, 1.5, 1000); 
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(300, 550, 1.5, 1000); 
	glColor3f(1.0, 1.0, 1.0); 
	DrawCircle2(640, 740, 1, 1000);  
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(1150, 660, 2, 1000);  
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(850, 500, 1, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(50, 1130, 2, 1000); 
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(520, 1100, 2, 1000); 
    glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(750, 980, 2, 1000);
    glEnd();
    
    
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(0, 20);
	glVertex2i(20, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(30, 60);
	glVertex2i(50, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(60, 100);
	glVertex2i(80, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(90, 140);
	glVertex2i(110, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(120, 180);
	glVertex2i(140, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(150, 220);
	glVertex2i(170, 220);
		glEnd();	
	
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(190, 20);
	glVertex2i(210, 20);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(220, 60);
	glVertex2i(240, 60);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(250, 100);
	glVertex2i(270, 100);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(280, 140);
	glVertex2i(300, 140);
	glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(310, 180);
	glVertex2i(330, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(340, 220);
	glVertex2i(360, 220);
		glEnd();	
		
	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(370, 20);
	glVertex2i(390, 20);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(400, 60);
	glVertex2i(420, 60);
	glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(430, 100);
	glVertex2i(450, 100);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(460, 140);
	glVertex2i(480, 140);
	glEnd();
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(490, 180);
	glVertex2i(510, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(520, 220);
	glVertex2i(540, 220);
		glEnd();
			
		
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(560, 20);
	glVertex2i(580, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(590, 60);
	glVertex2i(610, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(620, 100);
	glVertex2i(640, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(650, 140);
	glVertex2i(670, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(680, 180);
	glVertex2i(700, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(730, 220);
	glVertex2i(750, 220);
		glEnd();

	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(770, 20);
	glVertex2i(790, 20);
		glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(800, 60);
	glVertex2i(820, 60);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(890, 180);
	glVertex2i(910, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(920, 220);
	glVertex2i(940, 220);
		glEnd();
		
		
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(960, 20);
	glVertex2i(980, 20);
		glEnd();	
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(990, 60);
	glVertex2i(1010, 60);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1050, 140);
	glVertex2i(1070, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1080, 180);
	glVertex2i(1100, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1110, 220);
	glVertex2i(1130, 220);
		glEnd();	
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1150, 20);
	glVertex2i(1170, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1180, 60);
	glVertex2i(1200, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1210, 100);
	glVertex2i(1230, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1240, 140);
	glVertex2i(1260, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1270, 180);
	glVertex2i(1290, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1300, 220);
	glVertex2i(1320, 220);
		glEnd();
		
	glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1340, 20);
	glVertex2i(1360, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1370, 60);
	glVertex2i(1390, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1400, 100);
	glVertex2i(1420, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1430, 140);
	glVertex2i(1450, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1460, 180);
	glVertex2i(1480, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1490, 220);
	glVertex2i(1510, 220);
		glEnd();
	
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1540, 20);
	glVertex2i(1560, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1570, 60);
	glVertex2i(1590, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1600, 100);
	glVertex2i(1620, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1630, 140);
	glVertex2i(1650, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1660, 180);
	glVertex2i(1680, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1690, 220);
	glVertex2i(1710, 220);
		glEnd();
		
	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1740, 20);
	glVertex2i(1760, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1770, 60);
	glVertex2i(1790, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1800, 100);
	glVertex2i(1820, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1830, 140);
	glVertex2i(1850, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(1860, 180);
	glVertex2i(1880, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1890, 220);
	glVertex2i(1910, 220);
		glEnd();
		
    glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1940, 20);
	glVertex2i(1960, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1970, 60);
	glVertex2i(1990, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2000, 100);
	glVertex2i(2020, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2030, 140);
	glVertex2i(2050, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(2060, 180);
	glVertex2i(2080, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2090, 220);
	glVertex2i(2110, 220);
		glEnd();
			
    glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2140, 20);
	glVertex2i(2160, 20);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2170, 60);
	glVertex2i(2190, 60);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2200, 100);
	glVertex2i(2220, 100);
		glEnd();	
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2230, 140);
	glVertex2i(2250, 140);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);	
	glVertex2i(2260, 180);
	glVertex2i(2280, 180);
		glEnd();
		glBegin(GL_LINE_LOOP);//water
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(2290, 220);
	glVertex2i(2310, 220);
		glEnd();

	glutSwapBuffers();

}


void keyboard2(unsigned char key, int x, int y)
{

	switch (key) {

	case 's':		//boat start
	case 'S':
		fishStatus2 = 1;
		break;
	case 'r':		//boat stop
	case 'R':
		fishStatus2 = 0;
		break;

	default:
		break;
	}
}

void fish2()
{
	if (fishStatus2 == 1)
	{
		fish2X -= 0.9;
		fish2Y +=.01;
	}
	if (fish2X>1000)
	{
		fish2X = -600;
	}
	glPushMatrix();
	glTranslatef(fish2X, fish2Y, 0);
	drawfish2(1);
	glPopMatrix();
}

void display5(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	scene2();
	tree2();
	fish2();
	char str8[]="PRESS 'E or e' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glutKeyboardFunc(key6);
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}
void key5(unsigned char key,int x,int y)
{
	if(key=='D'||key=='d')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id4);
		glutInitWindowSize(1500,750);
		id5=glutCreateWindow("Three fishes");
		glutDisplayFunc(display5);
	}
}
void display4()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="As Sonu was swimming he heard a fisherman speaking for himself";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char str2[]="that he would arrive there in the next morning to fish in the lake.";
	glColor3f(1,1,1);
	glRasterPos2f(310,750);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}

	char str3[]="PRESS 'D or d' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str3);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key5);
	glFlush();
	glutPostRedisplay();
}
void key4(unsigned char key,int x,int y)
{
	if(key=='C'||key=='c')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id3);
		glutInitWindowSize(1500,750);
		id4=glutCreateWindow("Three fishes");
		glutDisplayFunc(display4);
	}
}


void drawfish1(int i)
{
	glPushMatrix();
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	//chinku
	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,1.0,0.0);
	glVertex2i(40,200);
	glVertex2i(120,280);
	glVertex2i(320,200);
	glVertex2i(100,160);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(0.0,1.0,0.0);
	glVertex2i(320,200);
	glVertex2i(360,240);
	glVertex2i(340,200);
	glVertex2i(360,160);
	glVertex2i(320,200);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(1.0,0.0,0.0);
	glVertex2i(120,280);
	glVertex2i(140,300);
	glVertex2i(280,216);
	glVertex2i(120,280);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(1.0,0.0,0.0);
	glVertex2i(100,160);
	glVertex2i(140,200);
	glVertex2i(120,164);
	glVertex2i(100,160);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(100,240);
	glVertex2i(120,260);
	glVertex2i(90,230);
	glEnd();
	
	glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(100, 250, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(100, 250, 2, 1000);	 	
	glEnd();

	//minku
			
	glBegin(GL_POLYGON); // draw body
	glColor3f(0.75,0.5,0.9);
	glVertex2i(740,700);
	glVertex2i(820,780);
	glVertex2i(1020,700);
	glVertex2i(800,660);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(1.0,0.0,1.0);
	glVertex2i(1020,700);
	glVertex2i(1060,740);
	glVertex2i(1040,700);
	glVertex2i(1060,660);
	glVertex2i(1020,700);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(0.5,0.6,0.0);
	glVertex2i(820,780);
	glVertex2i(840,800);
	glVertex2i(980,716);
	glVertex2i(820,780);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(0.5,0.0,0.6);
	glVertex2i(800,660);
	glVertex2i(840,700);
	glVertex2i(820,664);
	glVertex2i(800,660);
	glEnd();
	
	glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(810, 750, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(810, 750, 2, 1000);	 	
	glEnd();

	//rinku

	glBegin(GL_POLYGON); // draw body
	glColor3f(0.0,0.0,0.1);
	glVertex2i(40,1000);
	glVertex2i(120,1080);
	glVertex2i(320,1000);
	glVertex2i(100,960);
	glEnd();

	glBegin(GL_POLYGON); //draw tail
	glColor3f(1.0,1.0,0.0);
	glVertex2i(320,1000);
	glVertex2i(360,1040);
	glVertex2i(340,1000);
	glVertex2i(360,960);
	glVertex2i(320,1000);
	glEnd();
	glBegin(GL_POLYGON); //draw Top Key
	glColor3f(0.0,1.0,1.0);
	glVertex2i(120,1080);
	glVertex2i(140,1100);
	glVertex2i(280,1016);
	glVertex2i(120,1080);
	glEnd();

	glBegin(GL_POLYGON); //draw Buttom Key
	glColor3f(0.2,0.5,0.7);
	glVertex2i(100,960);
	glVertex2i(140,1000);
	glVertex2i(120,964);
	glVertex2i(100,960);
	glEnd();
	
	glBegin(GL_POLYGON);//eye
	glColor3f(1.0, 1.0, 1.0);
	DrawCircle2(100, 1050, 5, 1000);	 	
	glEnd();
	glBegin(GL_POLYGON);//eye
	glColor3f(0.0, 0.0, 0.0);
	DrawCircle2(100, 1050, 2, 1000);	 	
	glEnd();

	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	glutSwapBuffers();
	glFlush();

}
void keyboard1(unsigned char key, int x, int y)
{

	switch (key) {

	case 's':		//boat start
	case 'S':
		fishStatus1 = 1;
		break;
	case 'r':		//boat stop
	case 'R':
		fishStatus1 = 0;
		break;

	default:
		break;
	}
}

void fish1()
{
	if (fishStatus1 == 1)
	{
		fish1X -= .09;
		fish1Y-=.02;
	}
	if (fish1X>1000)
	{
		fish1X = -600;
	}
	glPushMatrix();
	glTranslatef(fish1X, fish1Y, 0);
	drawfish1(1);
	glPopMatrix();
}



void display3(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	fish1();
	char str8[]="PRESS 'C or c' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glutKeyboardFunc(key4);
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}


void key3(unsigned char key,int x,int y)
{
	if(key=='B'||key=='b')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id2);
		glutInitWindowSize(1500,750);
		id3=glutCreateWindow("Three fishes");
		glutDisplayFunc(display3);
	}
}
void display2()
{
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str1[]="Once upon a time there lived three fishes namely Sonu,Monu & Chutki";
	glColor3f(1,1,1);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char str2[]="of green,pink and dark colors respectively in a lake.";
	glColor3f(1,1,1);
	glRasterPos2f(310,750);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}
	char str3[]="Though the three fishes were firm friends and spent all their time ";
	glColor3f(1,1,1);
	glRasterPos2f(310,700);
	for(i=0;i<strlen(str3);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	}
	char str4[]=" together each was very different from the other .";
	glColor3f(1,1,1);
	glRasterPos2f(310,650);
	for(i=0;i<strlen(str4);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
	}
	char str5[]=" Sonu fish was intelligent .";
	glColor3f(1,1,1);
	glRasterPos2f(310,600);
	for(i=0;i<strlen(str5);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
	}
	char str6[]=" Monu fish always believed in fate and was foolish.";
	glColor3f(1,1,1);
	glRasterPos2f(310,550);
	for(i=0;i<strlen(str6);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
	}
	char str7[]=" Chutki fish was very smart though lazy.";
	glColor3f(1,1,1);
	glRasterPos2f(310,500);
	for(i=0;i<strlen(str7);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
	}
	char str8[]="PRESS 'B or b' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);

	for(i=0;i<strlen(str8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key3);
	glFlush();
	glutPostRedisplay();
}
void key2(unsigned char key,int x,int y)
{
	if(key=='A'||key=='a')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id1);
		glutInitWindowSize(1500,750);
		id2=glutCreateWindow("Three fishes");
		glutDisplayFunc(display2);
	}
}
void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
}
int main(int argc,char ** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(1500,750);
	glutInitWindowPosition(0,0);
	id1=glutCreateWindow("THREE FISHES");
	init();
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(key2);
	glFlush();
	glutPostRedisplay();
	glutMainLoop();
}
