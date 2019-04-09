#include <stdio.h>
#include <math.h>

int main()
{
    float gasto,salariomin,custokW,custosem,custocom;

    scanf ("%f %f", &salariomin, &gasto);
    custokW = salariomin * 0.007;
    custosem = ((salariomin * 0.7)*gasto)/100;
    custocom = (((salariomin * 0.7)*gasto)/100) - 0.10 * (((salariomin * 0.7)*gasto)/100);
    printf("Custo por kW: R$ %.2f\n",truncf(custokW * 100)/100);
    printf("Custo do consumo: R$%.2f\n",truncf(custosem * 100)/100);
    printf("Custo com desconto: R$ %.2f\n",truncf(custocom * 100)/100);


    return 0;
}
