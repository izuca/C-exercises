#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    float concatenacao;

    scanf("%i %i %i",&n1 ,&n2 ,&n3);
    if (n1 >9 || n2 >9 || n3 >9)
        printf("DIGITO INVALIDO");
    else
    {
        concatenacao = n1 * 100 + n2 * 10 + n3;
        printf("%.0f, %.0f",concatenacao, concatenacao*concatenacao);
    }






    return 0;
}
