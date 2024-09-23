// Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.

#include <stdio.h>

int main (void){
    float velocidade;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    if (velocidade>80){
        float valorMulta = (velocidade-80) *5;
        printf("Você foi multado e terá que pagar uma multa de %.1f reais", valorMulta);
    }
    return 0;
}