#include<GL/glut.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void inicializa(void);
void desenha(void);

float pontos[] = {
  0.5, 0.4,
  0.0, 0.0,
  -0.5, 0.4
};

float cores[] = {
  1.0, 0.0, 0.3,
  0.0, 1.0, 0.3,
  0.0, 0.0, 1.0
};

int main(int argc, char* argv[]){
    //Inicializa a biblioteca Glut
    glutInit(&argc, argv);

    //Definir modo de exibição
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    //Define posição da janela na tela
    glutInitWindowPosition( 200, 100 );

    //Define o tamanho
    glutInitWindowSize(400, 500);

    /*Cria uma janela com o nome recebido
      Como parâmetro e retorna um inteiro
      que identifica a janela.*/
    int id = glutCreateWindow( "Exemplo Simples 1" );

    /*Recebe uma função com os dados para
      a definição da janela e funções de
      callback.*/ 
    glutDisplayFunc(desenha);

    inicializa();

    /*É um loop que monitora as rotinas
      de callback*/ 
    glutMainLoop();

    return 0;
}

void inicializa()
{
  //determina a cor da janela.
  glClearColor(0.0, 0.6, 1.0, 0.0);
  //Especifica a matriz
  glMatrixMode(GL_PROJECTION);
  //Carrega a identidade da matriz
  glLoadIdentity();
  /*gera uma matriz de projeção
  ortogonal*/
  glOrtho(-10.0, 10.0, -10.0, 10.0, -1.0, 1.0);
  //Define cor padrão dos objetos
  glColor3f(0.2, 1.0, 0.5);
}

//Função que desenha o triângulo
void desenha(){
  //Limpa a tela
  glClear(GL_COLOR_BUFFER_BIT);
  
  glBegin(GL_POLYGON);
    glVertex2f(-5.0, -5.0);
    glVertex2f(5.0, -5.0);
    glVertex2f(0.0, 5.0);
  glEnd();

  glFlush();
}




