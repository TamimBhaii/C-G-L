#include <GL/glut.h> 
#include <cmath> 
void midPointCircle(float xc, float yc, float r){ 
float x = 0, y = r; 
float p = 1 - r; 
glBegin(GL_POLYGON); 
glVertex2f(xc + x, yc + y); 
glVertex2f(xc - x, yc + y); 
glVertex2f(xc + x, yc - y); 
glVertex2f(xc - x, yc - y); 
glVertex2f(xc + y, yc + x); 
glVertex2f(xc - y, yc + x); 
glVertex2f(xc + y, yc - x); 
glVertex2f(xc - y, yc - x); 
while (x < y)    { 
x += 1; 
if (p < 0) 
p += 2 * x + 1; 
else        
{ 
y -= 1; 
p += 2 * (x - y) + 1; 
} 
glVertex2f(xc + x, yc + y); 
glVertex2f(xc - x, yc + y); 
glVertex2f(xc + x, yc - y); 
glVertex2f(xc - x, yc - y); 
glVertex2f(xc + y, yc + x); 
glVertex2f(xc - y, yc + x); 
glVertex2f(xc + y, yc - x); 
glVertex2f(xc - y, yc - x); 
} 
glEnd(); 
} 
void RectangeShpe(float startx, float starty, float width, float height){ 
glBegin(GL_QUADS); 
glVertex2f(startx, starty); 
glVertex2f(startx + width, starty); 
glVertex2f(startx + width, starty + height); 
glVertex2f(startx, starty + height); 
glEnd(); 
} 
void TriangleShpe(float startx, float starty, float width, float height, float moveTop){ 
glBegin(GL_TRIANGLES); 
glVertex2f(startx, starty); 
glVertex2f(startx + width, starty); 
glVertex2f(startx + (width / 2) + moveTop, starty + height); 
glEnd(); 
} 
void leftPolygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(370, 700); 
glVertex2f(400, 550); 
glVertex2f(420, 550); 
glVertex2f(390, 680); 
glEnd(); 
} 
void rightPolygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(630, 700); 
glVertex2f(600, 550); 
glVertex2f(580, 550); 
glVertex2f(610, 680); 
glEnd(); 
} 
void topPolygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(370, 700); 
glVertex2f(630, 700); 
glVertex2f(610, 680); 
glVertex2f(390, 680); 
glEnd(); 
} 
void left1Polygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(650, 500); 
glVertex2f(710, 520); 
glVertex2f(710, 510); 
glVertex2f(660, 490); 
glEnd(); 
} 
void left2Polygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(650 + 100, 500 - 100); 
glVertex2f(710 + 100, 520 - 100); 
glVertex2f(710 + 100, 510 - 100); 
glVertex2f(660 + 100, 490 - 100); 
glEnd(); 
} 
void right1Polygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(290, 520); 
glVertex2f(350, 500); 
glVertex2f(350, 490); 
glVertex2f(290, 510); 
glEnd(); 
} 
void right2Polygon(){ 
glBegin(GL_POLYGON); 
glVertex2f(290 - 100, 520 - 100); 
glVertex2f(350 - 100, 500 - 100); 
glVertex2f(350 - 100, 490 - 100); 
glVertex2f(290 - 100, 510 - 100); 
glEnd(); 
} 
void drawShapes(void){ 
glClear(GL_COLOR_BUFFER_BIT);  
glColor3f(0, 0, 0); 
RectangeShpe(100, 140, 800, 20); 
glColor3f(0.6, 0, 0.11); 
RectangeShpe(130, 160, 740, 20); 
glColor3f(0.902, 0, 0.161); 
RectangeShpe(150, 180, 700, 20); 
glColor3f(1.0, 0.0, 0.0); 
midPointCircle(500, 450, 140);   
glColor3f(0, 0, 0); 
RectangeShpe(400, 610, 200, 10); 
RectangeShpe(400, 540, 200, 10); 
RectangeShpe(400, 450, 200, 10); 
RectangeShpe(400, 350, 200, 10); 
glColor3f(1.0, 1.0, 1.0); 
RectangeShpe(490, 200, 20, 350); 
RectangeShpe(490, 550, 20, 150); 
RectangeShpe(400, 200, 20, 350); 
RectangeShpe(580, 200, 20, 350); 
leftPolygon(); 
rightPolygon(); 
topPolygon(); 
RectangeShpe(650, 200, 10, 300); 
RectangeShpe(700, 200, 10, 300 + 10); 
left1Polygon(); 
glColor3f(0, 0, 0); 
RectangeShpe(650+10, 300, 40, 10); 
RectangeShpe(650+10, 400, 40, 10); 
glColor3f(1.0, 1.0, 1.0); 
RectangeShpe(750, 200, 10, 200); 
RectangeShpe(800, 200, 10, 200 + 10); 
left2Polygon(); 
glColor3f(0, 0, 0); 
RectangeShpe(650 + 100+10, 300 - 50, 40, 10); 
RectangeShpe(650 + 100+10, 400 - 50, 40, 10); 
glColor3f(1.0, 1.0, 1.0); 
RectangeShpe(340, 200, 10, 300); 
RectangeShpe(290, 200, 10, 300 + 10); 
right1Polygon(); 
glColor3f(0, 0, 0); 
RectangeShpe(290+10, 300, 40, 10); 
RectangeShpe(290+10, 400, 40, 10); 
glColor3f(1.0, 1.0, 1.0); 
RectangeShpe(240, 200, 10, 200); 
RectangeShpe(190, 200, 10, 200 + 10); 
right2Polygon(); 
glColor3f(0, 0, 0); 
RectangeShpe(290 - 100+10, 300 - 50, 40, 10); 
RectangeShpe(290 - 100+10, 400 - 50, 40, 10); 
glFlush();  
} 
void init(void){  
glClearColor(0.0, 0.0, 0.0, 1.0); 
glMatrixMode(GL_PROJECTION);  
gluOrtho2D(0.0, 1000.0, 0.0, 800.0); 
} 
int main(int argc, char *argv[]){ 
glutInit(&argc, argv);                        
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
glutInitWindowPosition(1920 - 1000, 100); 
glutInitWindowSize(1000, 800);         
glutCreateWindow("Md. Tamim Islam ID: 1285");    
init();                  
glutDisplayFunc(drawShapes); 
glutMainLoop();         
return 0; 
} 