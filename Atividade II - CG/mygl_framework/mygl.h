#ifndef MYGL_H
#define MYGL_H

#include <stdlib.h>
#include <string.h>

#include "core.h"

void InitMyGl(void); // Inicializa o frame buffer 
unsigned char* GetFBMemPtr(void); // Retorna o ponteiro do framebuffer buffer
void CloseMyGl(void); // Desaloca a memória do framebuffer

// Declaração da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void);

//
// >>> Caro aluno: declare aqui as funções que você implementar <<<
//

// definindo as cores

struct color
{
    float r;
    float g;
    float b;
    float a;
};


color cor0 = { 255 , 0, 0, 0}; 
color cor1 = { 0, 255, 0, 0};
color cor2 = { 0, 0, 255, 0};


// funcao PutFixel

void PutPixel (int x, int y, color cor){
    if (x<0||y<0||x>IMAGE_WIDTH||y>IMAGE_HEIGHT){
        return;
    }
    else{
        FBptr[x*4 + IMAGE_WIDTH*y*4] = cor.r;
        FBptr[x*4 + IMAGE_WIDTH*y*4 + 1] = cor.g;
        FBptr[x*4 + IMAGE_WIDTH*y*4 + 2] = cor.b;
        FBptr[x*4 + IMAGE_WIDTH*y*4 + 3] = cor.a;
    }
}


// funcao que drawline

void DrawLine ( int x0, int y0, int x1, int y1, color cor0, color cor1) {

    int dx = x1 - x0;
    int dy = y1 - y0;

    int d = 2*dx - dy;// valor para ponto inicial ( d )

    color cor = cor0;

    int incS = 2*dx; //inserindo valores iniciais para incremento de localizacao
    int incSE = 28(dx - dy);

    int x = x0; //definindo valores iniciais para raterização
    int y =y0;

    PutPixel (x, y , color);

    while (y < y1){
        if (d <=0){
            d += incS;
            y++
        }else{
            d+=incSE;
            y++;
            x++;
        }
        PutPixel(x, y, cor);
    }

}





#endif  // MYGL_H
