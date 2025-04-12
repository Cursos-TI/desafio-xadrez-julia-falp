#include <stdio.h>

int i = 0;
e = 0;
j = 0;

int main()
{
    // Mover a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Mover o Bispo 5 casas para cima e direita
    while (j < 5)
    {
        printf("Cima/Direita\n");
        j++;
    }

    // Mover a Rainha 8 casas para a esquerda
    do
    {
        printf("Esquerda\n");
        e++;
    } while (e < 8);

    return 0;
}
