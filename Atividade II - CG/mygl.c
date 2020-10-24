#include "mygl.h"

unsigned char* fb_ptr = NULL;

void InitMyGl(void) {
    fb_ptr = (unsigned char *)malloc(IMAGE_WIDTH * IMAGE_HEIGHT * 4 * sizeof(char));	

    for (int i = 0; i < IMAGE_WIDTH * IMAGE_HEIGHT; ++i) {
        fb_ptr[i * 4] = 0;
        fb_ptr[i * 4 + 1] = 0;
        fb_ptr[i * 4 + 2] = 0;
        fb_ptr[i * 4 + 3] = 255;
    }    
}

unsigned char* GetFBMemPtr(void) {
	return fb_ptr;
}

void CloseMyGl(void) {
    if (!fb_ptr)
        free(fb_ptr);
}

//
// >>> Caro aluno: defina aqui as funções que você implementar <<<
//

// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
    //
    // >>> Caro aluno: chame aqui as funções que você implementou <<<
    
    //chamando funcao PutPixel

    PutPixel(150,260,cor0);
    PutPixel(250,260,cor1);
    PutPixel(350,260,cor2);

    //chamando drawline
    DrawLine(256, 0,256,512, cor0, cor2);
    DrawLine(256, 0,256,512, cor0, cor2); 
  

    //desenhando triangulo usando a drawline
   Drawline(300, 100, 200, 200, cor0 , cor1, cor 2);
   Drawline(300, 100, 400, 200, cor0 , cor1, cor 2);
   Drawline(200, 200, 400, 200, cor0 , cor1, cor 2);
}
