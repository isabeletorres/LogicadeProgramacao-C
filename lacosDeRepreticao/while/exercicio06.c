// Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 450 + 400 + 350 + 300 + ... + 50 + 0

#include<stdio.h>

int main (void){
    int soma=0, i=500;
    while (i>=0){
        soma += i;
        i -=50; 
    }
    printf("A soma é: %d", soma);
    return 0;
}