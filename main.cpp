#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	 // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f,1.0f,1.0f);       // Clear the color buffer (background)
	int i;

	GLfloat x=-.123f; GLfloat y=-.51f; GLfloat radius =.024f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//second circle

	 x=.0725f;  y=-.515f;  radius =-.024f;
        glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/*
	//line
	glColor3f(.0f,.0f,0.0f);
	glBegin(GL_LINES);
    glVertex2f(-1.0f,-.7f);
    glVertex2f(1.0f,-.7f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f,.1f);
    glVertex2f(1.0f,.1f);
    glEnd();
    */

    //quarts
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-1,-.7);
    glVertex2f(1,-.7);
    glVertex2f(1,-.68);
    glVertex2f(-1,-.68);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-1,.1);
    glVertex2f(-1,.08);
    glVertex2f(1,.08);
    glVertex2f(1,.1);
    glEnd();
//bus
    glBegin(GL_LINES);
    glVertex2f(-.3f,-.1f);
    glVertex2f(.42f,-.1f);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(-.3f,-.1f);
    glVertex2f(-.3f,-.5f);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(-.3f,-.5f);
    glVertex2f(-.15f,-.5f);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(-.1f,-.5f);
    glVertex2f(.05f,-.5f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.3f,-.5f);
    glVertex2f(.1f,-.5f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.3f,-.5f);
    glVertex2f(.42f,-.4f);
    glEnd();

     glBegin(GL_LINES);
    glVertex2f(.42f,-.4f);
    glVertex2f(.42f,-.1f);
    glEnd();
//door
     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-.25,-.2);
    glVertex2f(-.25,-.465);
    glVertex2f(-.2,-.465);
    glVertex2f(-.2,-.2);
    glEnd();

    //windo 1
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-.1,-.25);
    glVertex2f(-.1,-.35);
    glVertex2f(-0.03,-.35);
    glVertex2f(-0.03,-.25);
    glEnd();
   // win 2
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(.05,-.25);
    glVertex2f(.05,-.35);
    glVertex2f(.12,-.35);
    glVertex2f(.12,-.25);
    glEnd();

    //3

     glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(.2,-.25);
    glVertex2f(.2,-.35);
    glVertex2f(.27,-.35);
    glVertex2f(.27,-.25);
    glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

