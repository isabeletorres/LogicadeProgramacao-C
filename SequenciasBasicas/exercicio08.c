//Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.
#include <stdio.h>

int main(void){
    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    float novoSalario = (salario*0.15) + salario;
    
    printf("O novo salário será: %.1f", novoSalario);
    
    return 0;
}