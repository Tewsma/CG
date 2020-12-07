# icg

﻿## Atividade 3 Int CG - Transformations

Foi utilizada a biblioteca GLM no código template.

Compilando o código template, temos:

<p align="center">
  <img src="imagens/figura1.png" >
</p>

## Primera atividade - Escala

Modificar a matriz Model utilizandos os fatores (x, y, z) = (1/3, 3/2, 1)

```
float scale_array[16] = {1.0f/3.0f, 0.0f, 0.0f, 0.0f,
                              0.0f, 1.5f, 0.0f, 0.0f,
                              0.0f, 0.0f, 1.0f, 0.0f,
                              0.0f, 0.0f, 0.0f, 1.0f};

glm::mat4 model_mat = glm::make_mat4(scale_array);
```
Igualando a matriz Model à matriz de Escala, temos

<p align="center">
  <img src="imagens/scala.png" >
</p>


## Segunda atividade - Translação

Os fatores para aplicar a translação sao (x, y, z) = (1, 0, 0)

```
float trans_array[16] = {1.0f, 0.0f, 0.0f, 0.0f,
                         0.0f, 1.0f, 0.0f, 0.0f,
                         0.0f, 0.0f, 1.0f, 0.0f,
                         1.0f, 0.0f, 0.0f, 1.0f};

glm::mat4 model_mat = glm::make_mat4(trans_array);
```
Igualando a matriz Model à matriz de Translacao, temos

<p align="center">
  <img src="imagens/trans.png" >
</p>


## Terceira atividade - Projeção

Os fatores para aplicar a projeção é d = 1/8 na matriz de projeção

```
float proj_array[16] = {1.0f, 0.0f, 0.0f,   0.0f, 
                        0.0f, 1.0f, 0.0f,   0.0f, 
                        0.0f, 0.0f, 1.0f,  -8.0f, 
                        0.0f, 0.0f, 0.125f, 0.0f};

glm::mat4 proj_mat = glm::make_mat4(proj_array);
```
Igualando a matriz de Projeção, temos

<p align="center">
  <img src="imagens/projecao.png" >
</p>






Repositório do material da disciplina de Introdução à Computação Gráfica do CI/UFPB.
