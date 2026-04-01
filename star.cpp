#include<bits/stdc++.h>
#include<GL/glut.h>
using namespace std;

void drawstar(float x, float y, float r, float g, float b)
{
    glColor3f(r, g, b);
    glBegin(GL_TRIANGLES);

    glVertex2f(x, y + 0.2);
    glVertex2f(x - 0.05, y);
    glVertex2f(x + 0.05, y);

    glVertex2f(x, y - 0.2);
    glVertex2f(x - 0.05, y);
    glVertex2f(x + 0.05, y);

    glVertex2f(x - 0.2, y);
    glVertex2f(x, y - 0.05);
    glVertex2f(x, y + 0.05);

    glVertex2f(x + 0.2, y);
    glVertex2f(x, y - 0.05);
    glVertex2f(x, y + 0.05);

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawstar(-0.2, 0.0, 1.0, 0.0, 0.0);
    drawstar(0.2, 0.0, 1.0, 1.0, 1.0);
    drawstar(0.0, 0.2, 0.0, 1.0, 0.0);
    drawstar(0.0, -0.2, 0.0, 0.0, 1.0);

    glFlush();
}

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int argc = 1;
    char *argv[1] = {(char *)"something"};
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Md. Tamim Islam ID: 0242310005101285");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}