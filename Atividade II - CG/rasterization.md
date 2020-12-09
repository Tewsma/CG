# Atividade 2 Introducao a CG - Rasterization

O objetivo do trabalho eh implementar o Algoritmo do Ponto Medio. Sabendo que os monitores tem uma matriz de pixel (quase sempre localizada no canta superior esquerdo) e que cada pixel possui 4 bytes (1 para cores vermelhas, 1 para cores verdes, 1 para cores azuis, 1 para opacidade).

Para alcançar o objetivo iremos implementar 3 funcoes, sao elas passadas pelo professor:

* PutPixel()
* DrawLine()
* DrawTriangle()

Sabendo que W eh a largura do monitor, utilizaremos a formula **`4*X + 4*Y*W`** (dada no slide das aulas) para obter o primeiro byte de um certo pixel

## PutPixel

Como feito na Prova I, sera implementado a funcao PutPixel. Nessa funcao recebe como parametros as coordenadas do ponto (x, y), 
como tambem sua cor, RGBA.

Para descobrir em que posicao na memoria gravar, usa-se a fórmula citada acima

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


## Função DrawLine

Para a rasterização de linha foi utilizado o algoritmo de Bresenham, dois pixels como parâmetros. Porem,esse algoritmo ele funciona apenas para retas no primeiro octante, ou seja, retas entre 0º e 45º, assim necessitando alterar o algoritmo.


Primeiro passo foi identificar se os valores de x e y que compõem a reta crescem ou decrescem.

<p align="center">
  <img src="imagens/1e2.png" >
</p>




Na interpolacao de cores é feito uma comparacao de duas distancias assim indicando o quao proximo o pixel esta do pixel final. A medida  que o pixel se aproxima do pixel final, a cor ira se alterando conforme a aproximacao.

Usando a formula de calcular a distancia entre dois pontos no espaço, dada por meio de suas coordernadas.

<p align="center">
  <img src="imagens/formula.png" >
</p>


```C
double dist(pixel_t a, pixel_t b) {
    return sqrt(pow(b.x-a.x, 2) + pow(b.y-a.y, 2));
}
```













## Função DrawTriangule

Essa funcao tem como objetivo desenhar o triangulo recebendo como parametro 3 pixels, bastando chamar a função **drawLine()** três vezes. (Fazendo com que as linhas se encontrem nos vertices respectivos)

```C
void drawTriangle(pixel_t p1, pixel_t p2, pixel_t p3) {
    drawLine(p1, p2);
    drawLine(p2, p3);
    drawLine(p3, p1);
}
```

<p align="center">
  <img src="imagens/figura2.png" >
</p>

## Bibliografia

- https://pt.wikipedia.org/wiki/Algoritmo_de_Bresenham
- https://www.pucsp.br/~jarakaki/cgpi/Algoritmos_reta_circulo.pdf
- Slides do professor Christian


EM DESENVOLVIMENTO =)
