# Atividade 2 Introducao a CG - Rasterization

Nessa atividade sera implementado 3 funcoes, sao elas

* PutPixel
* DrawLine
* DrawTriangle

##PutPixel

Como feito na Prova I, sera implementado a funcao PutPixel. Nessa funcao recebe como parametros as coordenadas do ponto (x, y), 
como tambem sua cor, RGBA.

Para descobrir em que posicao na memoria gravar, usa-se a fórmula:
**`4*X + 4*Y*W`**, onde **W** é a largura da tela.

```C

void putPixel(pixel_t pixel) {
    int pos = pixel.x * 4 + pixel.y * IMAGE_WIDTH * 4;
    
    fb_ptr[pos++] = pixel.color.r;
    fb_ptr[pos++] = pixel.color.g;
    fb_ptr[pos++] = pixel.color.b;
    fb_ptr[pos]   = pixel.color.a;
}
```

<p align="center">
  <img src="imagens/figura1.png" >
</p>

EM DESENVOLVIMENTO =)
