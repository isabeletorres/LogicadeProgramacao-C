// A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escrevaum programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.

#include <stdio.h>

int main(void){
    float kmPecorridos;
    int dias;

    printf("Quantos Km você andou? ");
    scanf("%f", &kmPecorridos);
    printf("Quantos dias você alugou? ");
    scanf("%d", &dias);

    float precoTotal = (dias*90) + (kmPecorridos*0.2);

    printf("O total a ser pago é: %.1f", precoTotal);

    return 0;
}