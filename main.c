#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"

//4321
//1234
int main()
{
    double t=1;
    int n;
    scanf("%d",&n);
    printf("\n\n");
    for(; n >= 1; n--){

        t *= n;
        printf("%d\n",t);
    }
    printf("\n\n%d",t);
    return(0);
}
