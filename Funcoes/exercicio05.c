//Refaça o exercício 01, só que agora em forma de função Somador(), que vai receber dois parâmetros e vai retornar o resultado da soma entre eles para o programa principal.

#include <stdio.h>
int somador (int x, int y){
    return x+y;
}
int main() {
    int numero1, numero2, soma;
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite um número: ");
    scanf("%d", &numero2);

    soma = somador(numero1, numero2);
    printf("%d + %d = %d", numero1, numero2, soma);

    return 0;
}