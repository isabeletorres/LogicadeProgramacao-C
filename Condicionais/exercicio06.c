//Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua situação em relação ao alistamento militar. - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o alistamento.  - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do alistamento

#include <stdio.h>

int main (void){
    int anoNascimento;
    printf("Digitet seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    int idade = 2024-anoNascimento;
    if (idade>=18){
        printf("já se passaram %d anos do alistamento", idade-18);
    } else {
        printf("Flatam %d anos para você se alistar", 18-idade);
    }
    return 0;
}