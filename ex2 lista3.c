#include <stdio.h>
#include <stdlib.h>

/*O  custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  custo  de  fábrica  com  a percentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, faça uma função que leia o
custo de fábrica de um carro e retorne função principal o custo ao consumidor.  */

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
