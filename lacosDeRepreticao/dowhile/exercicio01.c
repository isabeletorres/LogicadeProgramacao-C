//Faça um programa usando a estrutura “faça enquanto” que leia a idade de várias pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou não continuar a digitar dados. No final, quando o usuário decidir parar, mostre na tela: a) Quantas idades foram digitadas b) Qual é a média entre as idades digitadas c) Quantas pessoas tem 21 anos ou mais.

#include<stdio.h>

int main (void){
    int idade=0, totalIdades=0, pessoas21=0, incremento=0;
    float media=0;
    char resposta;

    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if(idade>=21){
            pessoas21++;
        }

        totalIdades += idade;
        incremento++;
        printf("Quer continuar? ");
        scanf("%s", &resposta);
    } while (resposta=='S'||resposta=='s');
    media = totalIdades/incremento;

    printf("Total de idades digitadas: %d", incremento);
    printf("Média: %.1f", media);
    printf("Pessoas maiores de 21 %d", pessoas21);

    return 0;
}