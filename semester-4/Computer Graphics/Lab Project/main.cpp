
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */

void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */

void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

   // Define shapes enclosed within a pair of glBegin and glEnd


   glBegin(GL_POLYGON);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 0.0f, 1.0f); // Blue
      glVertex2f(0.1f, 0.0f);
      glVertex2f(0.2f, 0.0f);
      glVertex2f(0.2f, 0.1f);
      glVertex2f(0.3f, 0.1f);
      glVertex2f(0.3f, 0.0f);
      glVertex2f(0.5f, 0.0f);
      glEnd();

      glBegin(GL_POLYGON);
      glVertex2f(0.7f, 0.0f);
      glVertex2f(0.7f, 0.1f);
      glVertex2f(0.8f, 0.1f);
      glVertex2f(0.8f, 0.0f);
      glVertex2f(0.10f, 0.0f);
      glVertex2f(0.6f, 0.0f);
      //glVertex2f(0.5f, 0.6f);

   glEnd();



   glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
   glutInitWindowSize(320, 320);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}

/*
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void triangles()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0,6,0);
    glVertex2f(0,80);
    glVertex2f(-85,-90);
    glVertex2f(85,-90);
    glEnd();
    glFlush();
}

void rectangles()
{
    glBegin(GL_POLYGON);
    glColor3f(0,0,6);
    glVertex2f(40,40);
    glVertex2f(-40,40);
    glVertex2f(-40,-60);
    glVertex2f(40,-60);
    glEnd();
    glFlush();
}

void square_1()
{
    glBegin(GL_POLYGON);
    glColor3f(6,0,0);
    glVertex2f(-60,60);
    glVertex2f(-60,40);
    glVertex2f(-40,40);
    glVertex2f(-40,60);
    glEnd();
    glFlush();
}

void square_2()
{
    glBegin(GL_POLYGON);
    glColor3f(6,0,0);
    glVertex2f(60,60);
    glVertex2f(60,40);
    glVertex2f(40,40);
    glVertex2f(40,60);
    glEnd();
    glFlush();
}

void square_3()
{
    glBegin(GL_POLYGON);
    glColor3f(6,0,0);
    glVertex2f(-80,-80);
    glVertex2f(-80,-100);
    glVertex2f(-90,-80);
    glVertex2f(-90,-100);
    glEnd();
    glFlush();
}
void triangles_small_1()
{
    glBegin(GL_TRIANGLES);
    glColor3f(6,0,0);
    glVertex2f(0,6);
    glVertex2f(-5,-4);
    glVertex2f(5,-4);
    glEnd();
    glFlush();
}

void triangles_small_2()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0,6,0);
    glVertex2f(0,4);
    glVertex2f(-4,-3);
    glVertex2f(4,-3);
    glEnd();
    glFlush();
}

void triangles_small_3()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,6);
    glVertex2f(0,3);
    glVertex2f(-4,-3);
    glVertex2f(4,-3);
    glEnd();
    glFlush();
}

void draw()
{
    triangles();
    rectangles();
    triangles_small_1();
    triangles_small_2();
    square_1();
    square_2();
    square_3();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Shapes");

    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glPointSize(4);
    glLoadIdentity();
    gluOrtho2D(-200,200,-200,200);
    glMatrixMode(GL_MODELVIEW);
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;

}
*/


