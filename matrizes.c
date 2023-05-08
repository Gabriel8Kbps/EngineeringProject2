#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"

//Complex soma(Complex a, Complex b)
//{
//    Complex result;
//    result.real = a.real + b.real;
//    result.img = a.img + b.img;
//    return result;
//}

print_name()
{
    printf("=====Equipe=====\n\n");

        char name1[]= "LUCAS ALEXSANDRO LEAL DOS SANTOS";
        char name2[]= "GABRIEL DE JESUS DOS SANTOS COSTA";
        char name3[]= "SAULO MATTHEUS RIBEIRO DE OLIVEIRA";
        char name4[]= "JOSE HENRIQUE BARBOSA PENA";

        printf(" %s\n %s\n %s\n %s\n\n", name1,name2, name3, name4);
        return(0);
}

//teste_soma(Complex a)
//{
//    Complex result;
//    printf("======Teste da Operacao de Soma========\n\n");
//    result = soma(x,y);
//    printf("%.2f + %.2fj\n",result.real, result.img);
//}

teste_todos()
{
    print_name();
    return(0);
//    teste_soma();
}


