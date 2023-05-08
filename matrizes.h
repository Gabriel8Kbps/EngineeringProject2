#ifndef MATRIZES
#define MATRIZES
#include "matrizes.c"

typedef struct
{
    double real;
    double img;
}Complex;

Complex** allocateComplexMatrix (int linhas, int colunas)
{
    int i;
    Complex** matrix;
    matrix = (Complex **) malloc(linhas * sizeof(Complex*));
    if (matrix == NULL) {
        printf("Memory Allocation Failed\n");
        exit(1);
    }
    for(i = 0; i < colunas; i++){
        matrix[i] = (int *) malloc(colunas * sizeof(Complex));
        if (matrix[i] == NULL){
            printf("Memory Allocation Failed\n");
            exit(1);
        }
    }
}

print_name();
//soma(a,b);
//teste_soma(a);

#endif
