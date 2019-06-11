#include <stdio.h>

int main()
{
    int MatrizAltura,MatrizLargura,contador = 1;

    scanf("%i %i", &MatrizLargura, &MatrizAltura);

    int Matriz[MatrizAltura][MatrizLargura];

    for (int linha = 0;linha < MatrizAltura;linha++)
    {
        for(int coluna = 0; coluna < MatrizLargura;coluna++)
        {
            Matriz[linha][coluna] = 0;
            if(linha % 2 == 0)
            {
                if(coluna % 2 == 0)
                    Matriz[linha][coluna] = 0;
                else
                {
                    Matriz[linha][coluna] = contador;
                    contador++;
                }
            }
            if(linha % 2 != 0)
            {
                if(coluna % 2 != 0)
                    Matriz[linha][coluna] = 0;
                else
                {
                    Matriz[linha][coluna] = contador;
                    contador++;
                }
            }


        }
    }
    for (int linha = 0;linha < MatrizAltura;linha++)
    {
        for(int coluna = 0; coluna < MatrizLargura;coluna++)
        {
            printf("%i ",Matriz[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}
