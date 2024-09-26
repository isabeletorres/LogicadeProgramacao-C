//Crie um programa que tenha uma função SuperSomador(), que vai receber dois números como parâmetro e depois vai retornar a soma de todos os valores no intervalo entre os valores recebidos. Ex: SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21 SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85

#include<stdio.h>

int SuperSomador(int x, int y){
    int soma=0;
    for (int i=x; i<=y; i++){
        soma += i; 
    }
    return soma;
}

int main (void){
    int inicio=0, fim=0, soma;

    printf("Início: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);

    soma = SuperSomador(inicio, fim);

    printf("%d", soma);

    return 0;
}