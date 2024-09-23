//Faça um algoritmo que leia um determinado ano e mostre se ele é ou não BISSEXTO.

#include <stdio.h>

int main (void){
    int ano;
    printf("Digite um ano");
    scanf("%d", &ano);

    if (ano%4==0){
        printf("%d é um ano bissexto", ano);
    } else {
        printf("%d não é um ano bissexto", ano);
    }
    return 0;
}