#include <stdio.h>

int i = 0, e = 0, j = 0, c = 0, d = 0;

int main()
{
    // Mover a Torre 5 casas para a direita
    printf("Torre:\n");
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
    printf("\nRainha:\n");
    do
    {
        printf("Esquerda\n");
        e++;
    } while (e < 8);

    //Mover o Cavalo 2 casas para baixo e 1 esquerda
    printf("\nCavalo:\n");
    for (int c = 0; c < 1; c++)
    {
        while (d < 2)
        {
            printf("Baixo\n");
            d++;
        }
        
        printf("Esquerda\n");
    }
    

    return 0;
}
