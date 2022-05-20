#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que receba um número inteiro maior que 1, verifique se o número
fornecido é primo ou não e retorne o resultado ao programa principal. Um número é primo
quando é divisível apenas por 1 e por ele mesmo.
*/

int verificaPrimo(int n);

void main()
{
    int n, r;
    printf("\nDigite seu numero: ");
    scanf("%d",&n);
    r=verificaPrimo(n);
    if(r == 0){
        printf("\nO numero e primo");
    }
    else{
        printf("\nO numero nao e primo");
    }
}

int verificaPrimo(int n){
    int cont=0;
    for(int i = 2;i<n;i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont == 0){
        return 0;
    }
    else{
        return 1;
    }
}
