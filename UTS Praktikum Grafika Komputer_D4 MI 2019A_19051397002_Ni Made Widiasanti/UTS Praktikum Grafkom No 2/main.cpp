
/*Ni Made Widiasanti / 19051397002 / D4 Manajemen Informatika 2019A / UTS Grafika Komputer */

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0,0.0,0.0,0.0);
glClear (GL_COLOR_BUFFER_BIT);

     glColor3f (1.0, 0.0, 0.0);

glBegin(GL_POLYGON);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.5,0.5);
glVertex2f(0.5,0.5);
glVertex2f(0.5,-0.5);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("PERSEGI");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
