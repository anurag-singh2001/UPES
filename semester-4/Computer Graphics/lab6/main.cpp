// interactive program for line clipping using Cohen Sutherland line clipping algorithm
/*
#include <stdio.h>
#include <GL/glut.h>
#define outcode int
double xmin=50,ymin=50, xmax=100,ymax=100; // Window boundaries
//bit codes for the top,bottom,right & left
const int TOP = 1;
const int BOTTOM = 2;
const int RIGHT = 4;
const int LEFT = 8;
//used to compute bit codes of a point
outcode ComputeOutCode (double x, double y);
//Cohen-Sutherland clipping algorithm clips a line from P0 = (x0, y0) to P1 = (x1, y1)
//against a rectangle with diagonal from (xmin, ymin) to (xmax, ymax).


void CohenSutherlandLineClipAndDraw (double x0, double y0,double x1, double y1)
{
//Outcodes for P0, P1, and whatever point lies outside the clip rectangle
outcode outcode0, outcode1, outcodeOut;
bool accept = false, done = false;
//compute outcodes
outcode0 = ComputeOutCode (x0, y0);
outcode1 = ComputeOutCode (x1, y1);
do
{
if (!(outcode0 | outcode1)) //logical or is 0 Trivially accept & exit
{
accept = true;

done = true;
}
else if (outcode0 & outcode1) //logical and is not 0. Trivially reject & exit
done = true;
else
{ //failed both tests, so calculate the line segment to clip from an
// outside point to an intersection with clip edge
double x, y;
//At least one endpoint is outside the clip rectangle; pick it.
outcodeOut = outcode0? outcode0: outcode1;
//Now find the intersection point;
//use formulas y = y0 + slope * (x - x0), x = x0 + (1/slope)* (y - y0)
if (outcodeOut & TOP) //point is above the clip rectangle
{
x = x0 + (x1 - x0) * (ymax - y0)/(y1 - y0);
y = ymax;
}
else if (outcodeOut & BOTTOM) //point is below the clip rectangle
{
x = x0 + (x1 - x0) * (ymin - y0)/(y1 - y0);
y = ymin;
}
else if (outcodeOut & RIGHT)//point is to the right of clip rectangl
{
y = y0 + (y1 - y0) * (xmax - x0)/(x1 - x0);
x = xmax;
}
else //point is to the left of clip rectangle
{
y = y0 + (y1 - y0) * (xmin - x0)/(x1 - x0);

x = xmin;
}
//Now we move outside point to intersection point to clip
//and gets ready for next pass.
if (outcodeOut == outcode0)
{
x0 = x;
y0 = y;
outcode0 = ComputeOutCode (x0, y0);
}
else
{
x1 = x;
y1 = y;
outcode1 = ComputeOutCode (x1, y1);
}
}
} while (!done);
if (accept)
{
//draw a red colored viewport
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(xmin+200, ymin+200);
glVertex2f(xmax+200, ymin+200);
glVertex2f(xmax+200, ymax+200);
glVertex2f(xmin+200, ymax+200);
glEnd();
glColor3f(0.0,0.0,1.0); // draw blue colored clipped line
glBegin(GL_LINES);
glVertex2d (x0+200, y0+200);
glVertex2d (x1+200, y1+200);

glEnd();
}
}
//Compute the bit code for a point (x, y) using the clip rectangle
//bounded diagonally by (xmin, ymin), and (xmax, ymax)
outcode ComputeOutCode (double x, double y)
{
outcode code = 0;
if (y > ymax) //above the clip window
code |= TOP;
else if (y < ymin) //below the clip window
code |= BOTTOM;
if (x > xmax) //to the right of clip window
code |= RIGHT;
else if (x < xmin) //to the left of clip window
code |= LEFT;
return code;
}
void display()
{
double x0=120,y0=10,x1=40,y1=130;
glClear(GL_COLOR_BUFFER_BIT);
//draw the line with red color
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2d (x0, y0);
glVertex2d (x1, y1);
glVertex2d (10,70);
glVertex2d (250,90);
glEnd();
//draw a blue colored window
glColor3f(0.0, 0.0, 1.0);
glBegin(GL_LINE_LOOP);

glVertex2d(xmin, ymin);
glVertex2d(xmax, ymin);
glVertex2d(xmax, ymax);
glVertex2d(xmin, ymax);
glEnd();
CohenSutherlandLineClipAndDraw(x0,y0,x1,y1);
CohenSutherlandLineClipAndDraw(10,70,250,90);
glFlush();
}
void myInit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Cohen Sutherland Line Clipping Algorithm");
glutDisplayFunc(display);
myInit();
glutMainLoop();
return 0;
}
*/



// interactive program for line clipping using Liang-Barsky line clipping algorithm

#include<windows.h>
#include<GL/glut.h>

int x1=-80,x2=0,y3=-80,y2=0;
float u1=0,u2=1;
int xmin=-50,ymin=-50,xmax=50,ymax=50;
double p[4],q[4];  // changed from int to double thats it
void init()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-320,320,-240,240);
}
void clip(int x1,int y1,int x2,int y2)
{
    int dx=x2-x1,dy=y2-y1,i;
    double t;
    p[0]=-dx;q[0]=x1-xmin;
    p[1]=dx;q[1]=xmax-x1;
    p[2]=-dy;q[2]=y1-ymin;
    p[3]=dy;q[3]=ymax-y1;

    for(i=0;i<4;i++)
    {
        if(p[i]==0 && q[i]<0)
            return;
        if(p[i]<0)
        {
            t=(q[i])/(p[i]);  // This calculation was returning a zero because both q and p were int
            if(t>u1 && t<u2)
                {u1=t;}
        }
        else if(p[i]>0)
        {
            t=(q[i])/(p[i]);  // This calculation was returning a zero because both q and p were int
            if(t>u1 && t<u2)
                {u2=t;}
        }
    }
    if(u1<u2)
    {
        x1=x1+u1*(x2-x1);
        y1=y1+u1*(y2-y1);
        x2=x1+u2*(x2-x1);
        y2=y1+u2*(y2-y1);
        glBegin(GL_LINES);
            glVertex2i(x1,y1);
            glVertex2i(x2,y2);
        glEnd();
        glFlush();
    }
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2i(x1,y3);
        glVertex2i(x2,y2);
    glEnd();
    glFlush();
}
void myKey(unsigned char key,int x,int y)
{
glClear(GL_COLOR_BUFFER_BIT);
    if(key=='c')
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glFlush();
        glColor3f(0.0,0.0,0.0);
        glBegin(GL_LINES);
            glVertex2i(-50,-50);
            glVertex2i(-50,50);
            glVertex2i(-50,50);
            glVertex2i(50,50);
            glVertex2i(50,50);
            glVertex2i(50,-50);
            glVertex2i(50,-50);
            glVertex2i(-50,-50);
        glEnd();
        glFlush();
        clip(::x1,y3,x2,y2);
    }


}
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Clip");
    glutDisplayFunc(display);
    glutKeyboardFunc(myKey);
    init();
    glutMainLoop();
    return 0;
}

//


