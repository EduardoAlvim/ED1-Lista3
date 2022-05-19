#include <stdio.h>
#include <stdlib.h>

/*A  nota  final  de  um  estudante  é  calculada  a  partir  de  três  notas  atribuídas, respectivamente, a um trabalho de laboratório,
a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:

Nota                       Peso
Trabalho de laboratório     2
Avaliação semestral         3
Exame final                 5
Faça uma função que receba três notas, calcule e retorne ao programa principal a média ponderada e imprima a partir da média o conceito que segue a tabela:

Média ponderada     Conceito
8,01 ->10,0            A
7,01 ->8,0             B
6,01 ->7,0             C
5,01 ->6,0             D
0,00 ->5,0             E */

float calculaMedia(float tdl, float as, float ef);

void main()
{
    float tdl, as, ef;
    float media;
    printf("\nDigite as notas do aluno");
    printf("\nTrabalho de laboratorio: ");
    scanf("%f",&tdl);
    printf("\nAvaliacao semestral: ");
    scanf("%f",&as);
    printf("\nExame final: ");
    scanf("%f",&ef);

    media = calculaMedia(tdl, as, ef);

    printf("\nMedia e conceito do aluno : ");
    printf("\nMedia: %.2f",media);
    if(media >= 8.01)
    {
        printf("\nConceito A");
    }
    else if(media >= 7.01 && media<=8)
    {
        printf("\nConceito B");
    }
    else if(media >= 6.01 && media <=7)
    {
        printf("\nConceito C");
    }
    else if(media >= 5.01 && media <=6)
    {
        printf("\nConceito D");
    }
    else if(media >=0 && media <=5)
    {
        printf("\nConceito E");
    }


}
float calculaMedia(float tdl, float as, float ef)
{
    float r;
    tdl = tdl*0.2;
    as = as*0.3;
    ef= ef*0.5;

    r= tdl+ as+ ef;
    return r;
}
