//Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 por hora trabalhada.

#include <stdio.h>

int main(void){
    int dias;
    printf("Quantos dias você trabalhou? ");
    scanf("%d", &dias);
    
    int valor = (8*dias) * 25; 

    printf("Salário é: %d", valor);
    return 0;
}