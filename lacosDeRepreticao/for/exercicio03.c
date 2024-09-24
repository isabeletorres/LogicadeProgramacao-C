//Escreva um programa que leia um número qualquer e mostre a tabuada desse número, usando a estrutura “para”.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i=0; i<10; i++){
        printf("%d x %d = %d\n", numero, i+1, numero*(i+1));
    }

    return 0;
}