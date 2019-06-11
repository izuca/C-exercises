#include <stdio.h>

int main()
{
    int n,tr = 0;//tr=traço da Matriz; T=Matriz Transposta

    scanf("%i",&n);

    int Matriz[n][n],Transposta[n][n],Resultado[n][n];//Definindo uma Matriz para cada caso
    //Entrada da Matriz
    for (int linha = 0;linha < n;linha++)
    {
        for(int coluna = 0; coluna < n;coluna++)
        {
           scanf("%i",&Matriz[linha][coluna]);

           if(linha == coluna)
            tr += Matriz[linha][coluna];
        }
    }
    //Entrada da Transposta
    for (int linha = 0;linha < n;linha++)
    {
        for(int coluna = 0; coluna < n;coluna++)
        {
            Transposta[linha][coluna] = Matriz[coluna][linha];
        }
    }
    //Entrada do Resultado
    for (int linha = 0;linha < n;linha++)
    {
        for(int coluna = 0; coluna < n;coluna++)
        {
            Resultado[linha][coluna] = (tr * Matriz[linha][coluna]) + Transposta[linha][coluna];
            printf("%i ",Resultado[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
