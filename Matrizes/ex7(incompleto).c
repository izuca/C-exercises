#include <stdio.h>

int main()
{
    int matriz[6][6],aux = 0,soma[100],maiorsoma;

    for (int j = 0;j < 100;j++)
        soma[j] = 0;
    
    for (int linha = 0;linha < 6;linha++)
    {
        for(int coluna = 0; coluna < 6;coluna++)
        {
            scanf("%i",&matriz[linha][coluna]);
        }
    }
    
    for (int linha = 0;linha < 6;linha++)
    {
        for(int coluna = 0; coluna < 6;coluna++)
        {
            if(matriz[linha][coluna] != 0 && matriz[linha][coluna+1] != 0 && matriz[linha][coluna+2]!= 0 && matriz[linha+1][coluna+1] != 0 && matriz[linha+2][coluna] != 0 && matriz[linha+2][coluna+1] != 0 && matriz[linha+2][coluna+2] != 0)
            {
                soma[aux] = matriz[linha][coluna] + matriz[linha][coluna+1] + matriz[linha][coluna+2] + matriz[linha+1][coluna+1] + matriz[linha+2][coluna] + matriz[linha+2][coluna+1] + matriz[linha+2][coluna+2];
                printf("A soma é: %i\n",soma[aux]);
                aux++;
            }
        }
    }
    
    maiorsoma = soma[0];
    
    for (int i = 0;i < 100;i++)
    {

        if(soma[i] > maiorsoma && soma[i] != 0)
            maiorsoma = soma[i];

    }
    printf("a maiorsoma é:%i\n",maiorsoma);

    return 0;
}
