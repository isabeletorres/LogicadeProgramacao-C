// Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para viagens até 200Km e R$0.45 para viagens mais longas.
#include<stdio.h>

int main (void){
    float distancia;
    printf("Qual distância você pretende pecorrer? ");
    scanf("%f", &distancia);

    if(distancia<=200){
        float valorPassagem = distancia *0.5;
        printf("O valor da passagem será: %.1f", valorPassagem);
    } else {
        float valorPassagem = distancia *0.45;
        printf("O valor da passagem será: %.1f", valorPassagem);
    }
    return 0;
}