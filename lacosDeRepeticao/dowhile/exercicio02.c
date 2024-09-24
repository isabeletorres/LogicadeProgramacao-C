//Crie um programa usando a estrutura “faça enquanto” que leia vários números.A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na tela: a) O somatório entre todos os valoresmb) Qual foi o menor valor digitado c) A média entre todos os valores d) Quantos valores são pares

#include<stdio.h>

int main(void){
    int numero = 0, menorN = 0, soma = 0, pares = 0, incremento = 0;
    char resposta;
    float media = 0.0;

    do {
        printf("Diga um número: ");
        scanf("%d", &numero);

        // Atualizar o menor valor digitado
        if (incremento == 0) {  // Para o primeiro número
            menorN = numero;
        } else if (numero < menorN) {
            menorN = numero;
        }

        // Verificar se o número é par
        if (numero % 2 == 0) {
            pares++;
        }

        // Atualizar o somatório e o contador de números
        soma += numero;
        incremento++;

        // Perguntar se quer continuar
        printf("Quer continuar? (S/N) ");
        scanf(" %c", &resposta);  // O espaço antes de %c consome o enter deixado pelo scanf anterior

    } while (resposta == 'S' || resposta == 's');

    // Calcular a média
    media = (float)soma / incremento;

    // Mostrar os resultados
    printf("Soma: %d\n", soma);
    printf("Menor valor: %d\n", menorN);
    printf("Media: %.1f\n", media);
    printf("Pares: %d\n", pares);

    return 0;
}
