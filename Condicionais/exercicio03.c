//Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média e mostre na tela. No final, analise a média e mostre se o aluno teve ou não um bom aproveitamento (se ficou acima da média 7.0).

#include <stdio.h>

int main (void){
    float nota1, nota2;
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);

    float media = (nota1+nota2)/2;

    printf("A média das notas do aluno é: %.1f", media);

    if (media>=7){
        printf("Seu aproveitamento foi bom");
    } else {
        printf("Seu aproveitamento não foi bom");
    }
    return 0;
}