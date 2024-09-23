//Escreva um algoritmo que leia dois números inteiros e compare-os, mostrandona tela uma das mensagens abaixo: - O primeiro valor é o maior- O segundo valor é o maior - Não existe valor maior, os dois são iguais

#include <stdio.h> 

int main (void){
    int numero1, numero2;
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);

    if (numero1>numero2){
        printf("%d é maior que %d", numero1, numero2);
    } else if (numero2>numero1){
        printf("%d é maior que %d", numero2, numero1);
    } else {
        printf("Os dois números são iguais");
    }
    return 0;
}
