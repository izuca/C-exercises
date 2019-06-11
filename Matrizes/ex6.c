#include <stdio.h>

int main()
{
    int matriz[2][2];
    double quadrado[2][2];

    for (int linha = 0;linha < 2;linha++)
    {
        for(int coluna = 0; coluna < 2;coluna++)
        {
            scanf("%i",&matriz[linha][coluna]);
        }
    }

    quadrado[0][0] = (matriz[0][0] * matriz[0][0]) + (matriz[0][1] * matriz[1][0]);
    quadrado[0][1] = (matriz[0][0] * matriz[0][1]) + (matriz[0][1] * matriz[1][1]);
    quadrado[1][0] = (matriz[1][0] * matriz[0][0]) + (matriz[1][1] * matriz[1][0]);
    quadrado[1][1] = (matriz[1][0] * matriz[0][1]) + (matriz[1][1] * matriz[1][1]);

    for (int linha = 0;linha < 2;linha++)
    {
        for(int coluna = 0; coluna < 2;coluna++)
        {
            printf("%.3lf ",quadrado[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
