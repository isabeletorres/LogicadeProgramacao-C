// Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se ela pode ou não votar.
#include <stdio.h>

int main (void){
    int anoNascimento;
    printf("Digitet seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    
    if ((2024-anoNascimento)>=18){
        printf("Você já pode votar");
    } else {
        printf("Você ainda não está apto a votar");
    }
    return 0;
}