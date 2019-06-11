#include <stdio.h>

int main()
{
    int linha,coluna;

    scanf("%i",&linha);
    scanf("%i",&coluna);

    while(coluna == 0||linha == 0)
    {
        scanf("%i",&linha);
        scanf("%i",&coluna);
    }

    int vet[linha][coluna];

    for (int l = 0; l < linha; l++)
    {
        printf("linha %i: ",l + 1);
        for(int c = 0;c < coluna;c++)
        {
            scanf("%i",&vet[l][c]);
            if(c == coluna - 1)
                printf("%i\n",vet[l][c]);
            else
                printf("%i,",vet[l][c]);
        }
    }


    return 0;
}
