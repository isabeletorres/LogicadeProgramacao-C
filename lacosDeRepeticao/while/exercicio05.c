//Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.

#include<stdio.h>

int main (void){

    int soma=0, i=6;
    while (i<=100){
        soma +=i;  
        i+=2;
    }
    printf("A soma é: %d", soma);
    return 0;
}