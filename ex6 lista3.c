#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que envie para uma função uma string e receba dela a quantidade de
palavras que aparecem. */

int tamanhostr(char s[100]);

void main()
{
    char str[100];
    int r;
    printf("\nDigite sua string: ");
    fflush(stdin);
    gets(str);
    r=tamanhostr(str);
    printf("\nSua string tem %d caracteres",r);
}

int tamanhostr(char s[100]){
    return strlen(s);
}
