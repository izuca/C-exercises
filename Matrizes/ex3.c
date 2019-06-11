#include <stdio.h>

int main()
{
    int n;

    scanf("%i",&n);

    int vet[n][n];

    for (int l = 0; l < n; l++)
    {
        for(int c = 0;c < n;c++)
        {
            scanf("%i",&vet[l][c]);
            if(l + c == n - 1)
                printf("%i\n",vet[l][c]);
        }
    }


    return 0;
}
