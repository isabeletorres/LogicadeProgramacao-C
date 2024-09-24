//) Faça um programa usando a estrutura “para” que leia um número inteiro positivo e mostre na tela uma contagem de 0 até o valor digitado: Ex: Digite um valor: 9 Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM!

#include <stdio.h>

int main() {
    int numero;
    printf("digite um número: ");
    scanf("%d", &numero);

    for (int i=0; i<=numero; i++){
        printf("%d ", i);
    }
    printf("Fim");
    return 0;
}