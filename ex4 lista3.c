#include <stdio.h>
#include <stdlib.h>

/*Fa�a uma fun��o que verifique a validade de uma senha fornecida pelo usu�rio. A senha
� 4531. O algoritmo deve retornar se existe uma permiss�o de acesso ou n�o.
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
