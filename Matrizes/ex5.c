#include <stdio.h>

int main()
{
    int n,m;

    scanf("%i %i",&n,&m);

    int xadrez[n][m];

    for (int linha = 0;linha < n;linha++)
    {
        for(int coluna = 0; coluna < m;coluna++)
        {
            if(linha % 2 == 0)
            {
                if(coluna % 2 == 0)
                    printf("1");
                else
                    printf("0");
            }
            else
            {
                if(coluna % 2 == 0)
                    printf("0");
                else
                    printf("1");
            }
        }
        printf("\n");
    }


    return 0;
}
