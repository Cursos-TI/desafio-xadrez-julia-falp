#include <stdio.h>


void moverTorre(int casas)
{
    //Valida a quantidade de casas até zerar
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);// chamando o próprio método recursivamente diminuindo em 1 a quantidade de casas a ser mostradas
    }
}

void moverRainha(int casas)
{
    //Valida a quantidade de casas até zerar
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamando o próprio método recursivamente diminuindo em 1 a quantidade de casas a ser mostradas
    }
}

void moverBispo(int casasPercorrer, int caminhoAtual)
{
    //Valida se a quantidade de vezes executadas é igual a quantidade de casas solicitadas
    if (casasPercorrer == caminhoAtual)
    {
        printf("Caminho encerrado \n");
        return;
    }

    // Condição dentro do for executa apenas uma vez
    for (int i = -1; i < 1; i += 2)
    {
        printf("Direita / ");

        // Condição dentro do for executa apenas uma vez
        for (int j = -1; j < 1; j += 2)
        {
            printf("Cima \n");

            //Chama a função novamente incrementando o parâmetro caminhoAtual para que seja imprimido a quantidade correta de casas solicitadas
            moverBispo(casasPercorrer, caminhoAtual + 1);
        }
    }
}

void moverCavalo(int casas)
{
    //valida as casas a ser andadas em um sentido e depois no outro
    while (casas > 0)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima \n");
        }

        printf("Direita \n");
        break;// break para não ficar no loop infinito
    }
}

int main()
{
    printf("**********Torre************\n");
    moverTorre(5);
    printf("**********Rainha***********\n");
    moverRainha(8);
    printf("**********Bispo************\n");
    moverBispo(5, 0);
    printf("***********Cavalo***********\n");
    moverCavalo(2);
    return 0;
}
