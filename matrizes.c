#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"
#define tam 3

// MATRIZ TESTE
struct ComplexNumber a[tam][tam] = { {{3,2},{7,-2},{7.4,2}   }  ,   {   {1,-6},{-5,3.2},{1,1}    }   ,   {   {2,4},{1.3,4},{-2,-5.3} }   };
struct ComplexNumber b[tam][tam] = { {{7,-5},{3,-1},{1.3,-6} }    ,   {   {4.3,2},{-1,1},{2,9}   }   ,   {   {3,8},{2,4},{8,8}   }  };
struct ComplexNumber c[tam][tam] = { {{1,-2},{-3,-3},{1,8}   }  ,   {    {7,3},{0,2},{7,1}   }   ,   {   {2,3},{9,2},{-1,-5} }    };
struct ComplexNumber d[tam][tam] = { {{6,-4},{-8,1},{3,1.3}  } ,   { {7,2},{1,9},{2,6}   }   ,   {   {6,6},{3,11},{-23,-1}   }  };
struct ComplexNumber result[tam][tam];

// FUNCÕES

int soma(struct ComplexNumber a[][tam], struct ComplexNumber b[][tam], struct ComplexNumber result[][tam]);
int teste_soma();

int subtracao(struct ComplexNumber a[][tam], struct ComplexNumber b[][tam], struct ComplexNumber result[][tam]);
int teste_subtracao();

int soma(struct ComplexNumber a[][tam], struct ComplexNumber b[][tam], struct ComplexNumber result[][tam])
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

int teste_soma()
{
    int i,j;



    printf("Operando A:\n\n");

     for(i = 0;i < tam; i++)
        {
            for(j = 0; j < tam; j++)
            {
                    printf("\t%.2f ",a[i][j].real);
                }
                printf("\n");
        }
        printf("\n");

    printf("Operando B:\n\n");

     for(i = 0;i < tam; i++)
        {
            for(j = 0; j < tam; j++)
                {
                    printf("\t%.2f ",b[i][j].real);
                }
                printf("\n");
        }
        printf("\n");

    soma(a,b,result);

     printf("Resultado A + B: \n\n");

     for(i = 0;i < tam; i++)
        {
            for(j = 0; j < tam; j++)
                {
                    printf("\t%.2f ",result[i][j].real);
                }
                printf("\n");
        }
        printf("\n\n");

    printf("Operando C:\n\n");

    for(i = 0; i < tam; i++)
        {
            for(j = 0; j < tam; j++)
                {
                    printf("\t(%.2f) + (%.2fi)",c[i][j].real,c[i][j].img);
                }
                printf("\n");
        }
    printf("\n\n");

    printf("Operando D:\n\n");

    for(i = 0; i < tam; i++)
        {
            for(j = 0; j < tam; j++)
                {
                    printf("\t(%.2f) + (%.2fi)",d[i][j].real,d[i][j].img);
                }
                printf("\n");
        }
        printf("\n\n");


    soma(c,d,result);
     printf("Resultado C + D: \n\n");

     for(i = 0; i < tam; i++)
        {
            for(j = 0; j < tam; j++)
                {
                    printf("\t[(%.2f) + (%.2fi)]",result[i][j].real,result[i][j].img);
                }
                printf("\n");
        }
        printf("\n\n");




    return 0;
}

int subtracao(struct ComplexNumber a[][tam], struct ComplexNumber b[][tam], struct ComplexNumber result[][tam])
{
    int i,j;
    for(i = 0; i < tam; i++)
        {
            for(j = 0; j < tam; j++)
                {
                    result[i][j].real = a[i][j].real - b[i][j].real;
                    result[i][j].img = a[i][j].img - b[i][j].img;
                }
        }
    return 0;
}

int teste_subtracao()
{



}


//teste_transposta();
//teste_produto_matricial()
//teste_conjugada();
//teste_hermitiana();
//teste_produto_escalar();
//teste_todos();
