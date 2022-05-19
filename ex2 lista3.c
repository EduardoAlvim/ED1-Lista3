#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que receba dois números e retorne o maior.   */

int retornaMaior(int a, int b);


void main()
{
    int a, b, r;
    printf("\nDigite o numero A: ");
    scanf("%d",&a);
    printf("\nDigite o numero B: ");
    scanf("%d",&b);
    r=retornaMaior(a,b);
    printf("\nO maior numero e: %d",r);
}

int retornaMaior(int a, int b){
    int r;
    if(a>b){
        r=a;
    }
    else{
        r=b;
    }
    return r;
}
