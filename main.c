#include <stdio.h>
#include <stdlib.h>
#include "matrizes.c"

int main()
{



    printf("=====Equipe=====\n\n");

    char name1[]= "LUCAS ALEXSANDRO LEAL DOS SANTOS";
    char name2[]= "GABRIEL DE JESUS DOS SANTOS COSTA";
    char name3[]= "SAULO MATTHEUS RIBEIRO DE OLIVEIRA";
    char name4[]= "JOSE HENRIQUE BARBOSA PENA";

    printf(" %s\n %s\n %s\n %s\n\n", name1,name2, name3, name4);

    printf("======Teste da Operacao de Soma========\n\n");
        teste_soma();

    printf("======Teste da Operacao de Subtracao========\n\n");
        teste_subtracao();

    printf("======Teste da Operacao Transposta======\n\n");
        teste_transposta();

    printf("======Teste da Conjugada========\n\n");
        teste_conjugada();

//    printf("======Teste do Produto Matricial========\n\n");
//        teste_produto_matricial();
//


//    printf("======Teste da Hermitiana========\n\n");
//        teste_hermitiana();

//    printf("======Teste do Produto Escalar========\n\n");
//        teste_produto_escalar();

//    printf("======Teste Geral========\n\n");
//        teste_todos();


    return 0;
}
