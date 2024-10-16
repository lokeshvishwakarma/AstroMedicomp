// header files
#include <gl/glut.h>
#include <gl/freeglut_ext.h>

// global variable decalarations
bool bFullScreen = false;

// Entry-point function
int main(int argc, char* argv[])
{
    // local function declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);

    // code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Rectangle");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    return 0;
}

int initialize(void){
    // code
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    return 0;
}

void resize(int width, int height){
    // code
    glViewport(0, 0, width, height);
}

void display(void){
    // code
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.5, 0.5);
    glColor3d(0.0f,1.0f,0.0f);
	glVertex2f(0.5, 0.5);
    glColor3d(0.0f,0.0f,1.0f);
	glVertex2f(0.5, -0.5);
    glColor3d(0.0f,0.0f,0.0f);
	glVertex2f(-0.5, -0.5);
    glEnd();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y){
    // code
    switch (key)
    {
    case 27:
        glutLeaveMainLoop();
        break;
    case 'F':
    case 'f':
        if (bFullScreen == false){
            glutFullScreen();
            bFullScreen = false;
        }
        else{
            glutFullScreen();
            bFullScreen = false;
        }
        break;
    default:
        break;
    }
}

void mouse(int button, int state, int x, int y){
    // code
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        glutLeaveMainLoop();
        break;
    
    default:
        break;
    }
}

void uninitialize(void){
    // code
}