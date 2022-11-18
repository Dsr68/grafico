#include<GL/glew.h>
#include<GL/freeglut.h>
#include<GL/gl.h>

void testar(void);
void renderSceneCB(void);

int main(int argv, char* argc[])
{
    glutInit(&argv, argc);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Primeiro Programa");
    renderSceneCB();
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutDisplayFunc(testar);
	glutMainLoop();
}

void testar(void){

}

void renderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}