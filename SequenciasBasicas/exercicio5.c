//Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor.

#include <stdio.h>

int main (void){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("O antecessor de %d é: %d\n", numero, antecessor);
    printf("O sucessor de %d é: %d", numero, sucessor);
    return 0;
}