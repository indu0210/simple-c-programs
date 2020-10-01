#include<GL/freeglut.h>
#include<math.h>
#include <graphics.h>
void init(){
 glClearColor(0.986,1.0,1.0,0.0);
 glMatrixMode (GL_PROJECTION);
 gluOrtho2D (0.0, 200.0, 0.0, 150.0);

}
void boundaryfill(int x,int y,int f_color,int b_color)
{
	if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
	{
		putpixel(x,y,f_color);
		boundaryfill(x+1,y,f_color,b_color);
		boundaryfill(x,y+1,f_color,b_color);
		boundaryfill(x-1,y,f_color,b_color);
		boundaryfill(x,y-1,f_color,b_color);
	}
}
/*void display(){
 int i;
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.4, 0.2);
 glBegin (GL_LINES);
 for (i = 1; i < 150; i++){
  glVertex2i (0, i);
  glVertex2i (i+50, 0);
  //glVertex2i (0,0);
 }
 glEnd ( );
 glFlush ( );


}*/
void display(){
   float theta;
   int posX = 100;
   int posY = 100;
   int radius = 30;
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0,0,0);
   glBegin(GL_POINTS);
   for(int i=0; i<360; i++){
   theta = i*3.1416/180;
   glVertex2f(posX + radius*cos(theta), posY + radius*sin(theta));
   }
   boundaryfill(100,100,100,0);
 glEnd();
 glFlush();
}
int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	
 glutInitWindowSize(640,480);
 glutInitWindowPosition(1000,200);
 glutCreateWindow("Simple Window");
 init();					//Line B
 glutDisplayFunc(display);
 glutMainLoop();
			
 
}
