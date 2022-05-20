#include <GL/glut.h>
#include <stdio.h>

void display(void)
{
float dy,dx,step,x,y,k,Xin,Yin;
//m<1
float x1 = 50, y1 = 90; float x2 = 70, y2 = 60;

float m;
m = (y2 - y1)/(x2 - x1);

dx=x2-x1; dy=y2-y1;

if(abs(dx)> abs(dy))
{
step = abs(dx);
}
else
{
step = abs(dy);
}

Xin = dx/step; Yin = dy/step;

x=x1; y=y1;
glBegin(GL_POINTS); glVertex2i(x,y); printf("m=%f\n", m); glEnd();

for (k=1 ;k<=step;k++)
{
x= x + Xin; y= y + Yin;
glBegin(GL_POINTS); glVertex2i(x,y); glEnd();
}
glFlush();

}

void init(void)
{
glClearColor(0.7,0.7,0.7,0.7); glMatrixMode(GL_PROJECTION); glLoadIdentity();
gluOrtho2D(-100,100,-100,100);
}

int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); glutInitWindowSize (500, 500);
glutInitWindowPosition (100,100); glutCreateWindow ("DDA Line Algo m<1 and m>1"); init();
glutDisplayFunc(display); glutMainLoop();

return 0;
}
