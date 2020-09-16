#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,1.0);
//1
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1f, 0.5f);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.1f, 0.5f);
    glEnd();
//2
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f( -0.5f, 0.0f);
    glVertex2f( 0.0f, 0.0f);
    glEnd();
//3
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.5f, 0.0f);
    glVertex2f( 0.5f, 0.2f);
    glEnd();
//4
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, -0.5f);
    glVertex2f( 0.1f, -0.5f);
    glEnd();

    glPopMatrix();//while glPopMatrix pops the top matrix off the stack

    i+=0.1f;
//5
    glBegin(GL_TRIANGLES);
    glColor3ub(220,180,132);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, -1.0f);
    glVertex2f( 0.1f, -1.0f);
    glEnd();




    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(1080, 720);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    initGL();
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;
}












