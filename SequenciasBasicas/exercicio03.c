// Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório entre eles

#include <stdio.h>

int main(void){
    int numero1, numero2;
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite um número: ");
    scanf("%d", &numero2);

    int soma = numero1+numero2;

    printf("%d + %d = %d", numero1, numero2, soma);

    return 0;
}