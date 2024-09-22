// Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:Ex: Qual é o seu nome? João da Silva. Olá João da Silva, é um prazer te conhecer!

#include <stdio.h>

int main(void) {
    char nome[10];
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Ola %s, prazer em te conhecer!", nome);
    return 0;
}
