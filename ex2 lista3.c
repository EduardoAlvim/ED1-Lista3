#include <stdio.h>
#include <stdlib.h>

/*O  custo  ao  consumidor  de  um  carro  novo  �  a  soma  do  custo  de  f�brica  com  a percentagem do distribuidor e dos impostos
(aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, fa�a uma fun��o que leia o
custo de f�brica de um carro e retorne fun��o principal o custo ao consumidor.  */

float calculo(float cf);

void main()
{
    float custof, custo;
    printf("\nDigite o custo de fabrica do carro: ");
    scanf("%f",&custof);
    custo=calculo(custof);
    printf("\nO custo de seu carro sera: %.2f",custo);
}

float calculo(float cf){
    float pdd, imp, custo;
    pdd = cf*0.28;
    imp = cf*0.45;
    custo = cf + pdd + imp;
    return custo;
}
