#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float xo, yo, rad;

// Function to display the circle
void display()
{
glClear(GL_COLOR_BUFFER_BIT);

// Color of printing object
glColor3f(1, 1, 1);

float angle;

// Start to drawing the circle
glBegin(GL_POLYGON);


for (int i = 0; i < 100; i++) {

angle = i * 2 * (M_PI / 100);
glVertex2f(xo + (cos(angle) * rad),
yo + (sin(angle) * rad));





}

glEnd();

// Change the angle



// Its empties all the buffer
// causing the issue
glFlush();
}

// Driver Code
int main(int argc, char** argv)
{
glutInit(&argc, argv); printf("Enter x:");
scanf("%f", &xo);
printf("Enter y:");
scanf("%f", &yo); printf("Enter radius:"); scanf("%f", &rad);

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

// Assigning the size of window
glutInitWindowSize(500, 500);

// Assign the position of window
// to be appeared
glutInitWindowPosition(200, 200);

// Defining the heading of the window
glutCreateWindow("GeeksforGeeks");

// Backgronnd Color
glClearColor(0, 1, 0, 1);

// limit of the coordinate points
gluOrtho2D(-500, 500, -500, 500);

// Calling the function
glutDisplayFunc(display);

glutMainLoop();


return 0;
}
