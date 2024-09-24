// Faça um algoritmo que pergunte ao usuário um número inteiro e positivo qualquer e mostre uma contagem até esse valor: Ex: Digite um valor: 35 Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!

#include <stdio.h>

int main (void){
    int numero, i=0;
    printf("Digite um número: ");
    scanf("%d", &numero);

    while (i<numero){
        printf("%d ", i+1);
        i++;
    }
    printf("Acabou");
    return 0;
}