//Crie um programa que leia duas notas de um aluno e calcule a sua média,mostrando uma mensagem no final, de acordo com a média atingida:- Média até 4.9: REPROVADO - Média entre 5.0 e 6.9: RECUPERAÇÃO - Média 7.0 ou superior: APROVADO

#include <stdio.h>

int main (void){
    float nota1, nota2;
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);

    float media = (nota1+nota2)/2;

    if (media<0 || media>10){
        printf("Alguma nota foi digitada errada, por favor, digite novamente");
    } else {
        if (media>=7){
            printf("aprovado");
        } else if (media>=5 && media<7){
            printf("Recuperação");
        } else  {
            printf("Reprovado");
        }
    }
    
    return 0;
}