//Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura “para”. No final, mostre na tela: a) Quantas mulheres foram cadastradas b) Quantos homens pesam mais de 100Kg c) A média de peso entre as mulheres d) O maior peso entre os homens

#include <stdio.h>

int main() {
    
    char sexo;
    int mulheres=0, homens=0;
    float peso=0, media=0, maiorPeso=0, soma=0;

    for (int i=0; i<8; i++){
        printf("Qual seu sexo: ");
        scanf("%d", &sexo);
        printf("Digite seu peso: ");
        scanf("%f", &peso);

        if(sexo =='F' || sexo == 'f'){
            mulheres++;
            soma += peso;
        }
    } 
    media = soma/mulheres;
    printf("A quantidade mulhres %d e a media do peso %.1f", mulheres, peso);
    return 0;
}