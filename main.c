#include <stdio.h>

int main (void){
    int numero1, numero2;

    printf("Digite dois números: ");
    scanf("%d %d", &numero1, &numero2);

    int soma = numero1 + numero2;
     
    printf("A soma dos números digitados é: %d", soma);
    return 0;
}
