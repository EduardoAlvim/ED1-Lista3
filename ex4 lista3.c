#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que verifique a validade de uma senha fornecida pelo usuário. A senha
é 4531. O algoritmo deve retornar se existe uma permissão de acesso ou não.
*/

int verifica(int s);

void main()
{
    int senha, r;
    printf("\nDigite sua senha: ");
    scanf("%d",&senha);
    r = verifica(senha);
    if(r == 0){
        printf("\nSenha valida");
    }
    else{
        printf("\nSenha invalida");
    }
}

int verifica(int s){
    if(s == 4531){
        return 0;
    }
    else{
        return 1;
    }
}
