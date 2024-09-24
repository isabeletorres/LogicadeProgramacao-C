//Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1,marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo: 30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...

#include <stdio.h>

int main (void){
    int numero=0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    int i =numero;
    while (i>=1){
        if (i%4==0){
            printf("[%d] ", i);
        } else{
            printf("%d ", i);
        }
        
        i--;
    }
    printf("Acabou");
    return 0;
}