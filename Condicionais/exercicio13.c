// Desenvolva um programa que leia o nome de um funcionário, seu salário, quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de acordo com a tabela a seguir:  - Até 3 anos de empresa: aumento de 3% - entre 3 e 10 anos: aumento de 12.5% - 10 anos ou mais: aumento de 20%

#include <stdio.h>

int main (void){
    float salario;
    int anos;

    printf("Quantos anos você trabalha na empresa? ");
    scanf("%d", &anos);
    printf("Quanto você recebe por mês? ");
    scanf("%f", &salario);

    if(anos<3){
        float reajuste = (salario*0.03) +salario;
        printf("Seu novo salario sera: %f", reajuste);
    } else if(anos>=3 && anos<10){
        float reajuste = (salario*0.125) +salario;
        printf("Seu novo salario sera: %f", reajuste);
    } else {
        float reajuste = (salario*0.20) +salario;
        printf("Seu novo salario sera: %f", reajuste);
    }
    return 0;
}