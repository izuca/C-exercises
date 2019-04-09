#include <stdio.h>
#include <math.h>

int main()
{
    float F,Pol,C,mm;

    scanf("%f %f",&F,&Pol);
    
    C = (5 * (F - 32))/9;
    mm = Pol * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n",truncf(C * 100)/100);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n",truncf(mm * 100)/100);
    





    return 0;
}

