//Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
#include <stdio.h>

int main (void){
    float valorReal;
    printf("Digite quantos reais você tem: ");
    scanf("%f", &valorReal);

    float dolar = valorReal/3.45;

    printf("Você pode comprar aproximadamente %.2f dolares", dolar);
    return 0;
}