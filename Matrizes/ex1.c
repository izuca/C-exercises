#include <stdio.h>

int main()
{
    int det,vetA[2][2];

    for (int l = 0; l < 2; l++)
    {
        for(int c = 0;c < 2;c++)
        {
            scanf("%i",&vetA[l][c]);
        }
    }
    det = (vetA[0][0] * vetA[1][1]) - (vetA[0][1] * vetA[1][0]);
    printf("%i\n",det);
    return 0;
}
