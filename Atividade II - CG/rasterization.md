# Atividade 2 Int CG - Rasterization
 
O trabalho consiste em rasterizar linhas pelo Algoritmo do Ponto Médio, usando o framework que foi diponibilizado pelo prof Christian Azambuja
 
1 - para fazer a rasterização de um único ponto na tela, é preciso escrever, no color buffer, o valor dos quatro componentes RGBA. Daí fiz um struct chamado COR para que poder armazenar os valores do Pixel. E em seguida definir as cores, cor0 , cor1 e cor2.
 
 
2- Para fazer uma linha na tela, definir como parâmetros os seus vértices (inicial e final, usando tuplas (x0,y0) e (x1,y1)), e as cores(no formato RGBA) de cada vértice.



3- A última função é simplesmente realiza pela chamada da função anterior (DrawLine) fazendo uma chamada para cada aresta, resultando em 3 chamadas

**Obtive warning apos o comando make no prompt, porem o mesmo esta declado no codigo como uma struct**
