//Uma empresa precisa reajustar o salário dos seus funcionários, dando um aumento de acordo com alguns fatores. Faça um programa que leia o salário atual, o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa. No final, mostre o seu novo salário, baseado na tabela a seguir: - Mulheres - menos de 15 anos de empresa: +5% - de 15 até 20 anos de empresa: +12% - mais de 20 anos de empresa: +23% - Homens - menos de 20 anos de empresa: +3% - de 20 até 30 anos de empresa: +13% - mais de 30 anos de empresa: +25%

#include <stdio.h>

int main (void){
    float salarioAtual;
    int anosTrabalhando;
    char sexo;

    printf("Digite o seu sexo [M/F] ");
    scanf("%c", &sexo);
    printf("Digite a quanto tempo você trabalha na empresa: ");
    scanf("%d", &anosTrabalhando);
    printf("Digite seu salario atual: ");
    scanf("%f", &salarioAtual);

    float salarioAtualizado=0;
    if (sexo == 'M' || sexo=='m'){
        if (anosTrabalhando<20){
            salarioAtualizado = salarioAtual + (salarioAtual*0.03); 
        } else if (anosTrabalhando>=20 && anosTrabalhando<=30){
            salarioAtualizado = salarioAtual + (salarioAtual*0.13);  
        } else{
            salarioAtualizado = salarioAtual + (salarioAtual*0.25); 
        }
    } else if  (sexo == 'F' || sexo=='f'){
        if (anosTrabalhando<15){
            salarioAtualizado = salarioAtual + (salarioAtual*0.05); 
        } else if (anosTrabalhando>=15 && anosTrabalhando<=20){
            salarioAtualizado = salarioAtual + (salarioAtual*0.12);  
        } else{
            salarioAtualizado = salarioAtual + (salarioAtual*0.23); 
        }
    } else {
        printf("O sexo informado é inválido");
    }
    printf("O Salario atualizado será: %.2f", salarioAtualizado);
    return 0;
}