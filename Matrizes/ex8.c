#include <stdio.h>

int main()
{
    int MatrizAltura,MatrizLargura,BordaLargura,Borda;

    scanf("%i %i %i %i", &MatrizLargura, &MatrizAltura, &BordaLargura, &Borda);

    int Matriz[MatrizAltura][MatrizLargura];

    for (int linha = 0;linha < MatrizAltura;linha++)
    {
        for(int coluna = 0; coluna < MatrizLargura;coluna++)
        {
            Matriz[linha][coluna] = 0;
            if(coluna <= BordaLargura - 1)
                Matriz[linha][coluna] = Borda;
            
            if(linha <= BordaLargura - 1)
                Matriz[linha][coluna] = Borda;
            
            if(linha >= MatrizAltura - BordaLargura)
                Matriz[linha][coluna] = Borda;
            
            if(coluna >= MatrizLargura - BordaLargura)
                Matriz[linha][coluna] = Borda;
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
