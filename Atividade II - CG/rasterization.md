# Atividade 1 Int CG - Modern OpenGL

A atividade nada mais era verificar se realmente o OpenGL Moderno estava realmente funcionado normalmente. Tentamos inicionalmente configura-lo no windows mas encontramos 
muitas dificuldade então logo pensamos em ultilizar o ubuntu mesmo e para termos mais praticidade rodamos ele em uma Virtual Machine. Usando o comando **make** para compilar e 
não houve nenhum erro de compilação (apenas warnings), porém inicialmente o triângulo só estava saindo branco. Depois de muito tentar descobrimos que estava sendo o usado o 
OpenGL 3.1 e resolvemos usando o comando **export MESA_GL_VERSION_OVERRIDE=3.3**

Segue o link com a compilação do programa:

https://drive.google.com/file/d/13XdrocpNvI5e3dAb1lnppT8xFw3mcoxR/view