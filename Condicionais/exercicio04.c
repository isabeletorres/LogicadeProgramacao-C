//Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR.
#include <stdio.h>

int main (void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero%2==0){
        printf("O número %d é Par", numero);
    } else {
        printf("O número %d é impar", numero);
    }
    return 0;
}