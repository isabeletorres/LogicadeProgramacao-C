//) Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses valores para um procedimento Maior() que vai verificar qual deles é o maior e mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem informando essa característica.

#include <stdio.h>

void Maior(int x, int y){
    if (x>y){
        printf("%d é maior que %d", x, y);
    } else if (y>x){
        printf("%d é maior que %d", y, x);
    } else {
        printf("Os valores são iguais");
    }
}

int main() {
    int valor1, valor2;
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);

    Maior(valor1, valor2);

    return 0;
}