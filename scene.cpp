#include<bits/stdc++.h>
#include<GL/glut.h>
using namespace std;

void draw_circle(float x, float y, float r)
{
    glBegin(GL_POLYGON);
    for(int i = 0; i < 100; i++)
    {
        float angle = 2 * 3.1416 * i / 100;
        float dx = r * cos(angle);
        float dy = r * sin(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Ground
    glColor3f(0.0, 0.8, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-1.0, -0.5);
    glVertex2f(1.0, -0.5);
    glVertex2f(1.0, -1.0);
    glVertex2f(-1.0, -1.0);
    glEnd();

    // House body
    glColor3f(0.7, 0.3, 0.2);
    glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.0, -0.5);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.5, 0.0);
    glEnd();

    // Roof
    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6, 0.0);
    glVertex2f(0.1, 0.0);
    glVertex2f(-0.25, 0.4);
    glEnd();

    // Door
    glColor3f(0.4, 0.2, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.35, -0.5);
    glVertex2f(-0.15, -0.5);
    glVertex2f(-0.15, -0.2);
    glVertex2f(-0.35, -0.2);
    glEnd();

    // Sun
    glColor3f(1.0, 1.0, 0.0);
    draw_circle(0.6, 0.6, 0.2);

    // Tree trunk
    glColor3f(0.5, 0.3, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(0.4, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, -0.1);
    glVertex2f(0.4, -0.1);
    glEnd();

    // Tree leaves
    glColor3f(0.0, 0.6, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.35, -0.1);
    glVertex2f(0.55, -0.1);
    glVertex2f(0.45, 0.3);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Scene Drawing");

    glClearColor(0.5, 0.8, 1.0, 1.0);

    gluOrtho2D(-1, 1, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}