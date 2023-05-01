#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"
#define tam 3

soma(struct ComplexNumber a[][tam], struct ComplexNumber b[][tam], struct ComplexNumber result[][tam]);
teste_soma();

soma(struct ComplexNumber a[][tam], struct ComplexNumber b[][tam], struct ComplexNumber result[][tam])
{
    int i,j;
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
            {
                result[i][j].real = a[i][j].real + b[i][j].real;
                result[i][j].img = a[i][j].img + b[i][j].img;
            }
    }
    return 0;
}

teste_soma()
{
    int i,j;

    struct complexo a[tam][tam] = {{3,2},{7,-2},{7.4,2}},{{1,-6},{-5,3.2},{1,1}},{{2,4},{1.3,4},{-2,-5.3}};
    struct complexo b[tam][tam] = {{7,-5},{3,-1},{1.3,-6}},{{4.3,2},{-1,1},{2,9}},{{3,8},{2,4},{8,8}};
    struct complexo c[tam][tam] = {{1,-2},{-3,-3},{1,8}},{{7,3},{0,2},{7,1}},{{2,3},{9,2},{-1,-5}};
    struct complexo d[tam][tam] = {{6,-4},{-8,1},{3,1.3}},{{7,2},{1,9},{2,6}},{{6,6},{3,11},{-23,-1}};
}


teste_subtracao();
teste_transposta();
teste_produto_matricial()
teste_conjugada();
teste_hermitiana();
teste_produto_escalar();
teste_todos();
