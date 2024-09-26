// Desenvolva um algoritmo que leia dois valores pelo teclado e passe essesvalores para um procedimento Somador() que vai calcular e mostrar a soma entre eles.

#include <stdio.h>
void somador (int x, int y){
    printf("%d + %d = %d", x, y, x+y);
}
int main() {
    int numero1, numero2;
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite um número: ");
    scanf("%d", &numero2);

    somador(numero1, numero2);

    return 0;
}