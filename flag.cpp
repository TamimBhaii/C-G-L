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

    // Flag background (deep green)
    glColor3f(0.0, 0.4, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-1.0, -0.5);
    glVertex2f(1.0, -0.5);
    glVertex2f(1.0, 0.5);
    glVertex2f(-1.0, 0.5);
    glEnd();

    // Red circle (center)
    glColor3f(1.0, 0.0, 0.0);
    draw_circle(0.0, 0.0, 0.3);

    glFlush();
}

int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Bangladesh Flag");

    glClearColor(0.0, 0.0, 0.0, 1.0);

    gluOrtho2D(-1, 1, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}