//) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina.

#include <stdio.h>

int main(void){
    float nota1, nota2;
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);

    float media = (nota1+nota2)/2;

    printf("A média das notas do aluno é: %.1f", media);
    return 0;
}