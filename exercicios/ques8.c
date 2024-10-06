#include <stdio.h>

int main(void) {
    int lista[10], maior, menor;

    // Entrada dos números na lista
    for (int i = 0; i < 10; i++) {
        printf("Digite o número [%d]: ", i + 1);
        scanf("%d", &lista[i]);
    }

    // Inicializar maior e menor com o primeiro valor da lista
    maior = menor = lista[0];

    // Encontrar o maior e o menor número
    for (int i = 1; i < 10; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        }
        if (lista[i] < menor) {
            menor = lista[i];
        }
    }

    // Exibir o maior e o menor número
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}
