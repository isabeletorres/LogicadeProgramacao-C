// Crie um algoritmo que leia o valor inicial da contagem, o valor final e o incremento, mostrando em seguida todos os valores no intervalo: Ex: Digite o primeiro Valor: 3 Digite o último Valor: 10 Digite o incremento: 2 Contagem: 3 5 7 9 Acabou!

#include <stdio.h>

int main(void){
    int valorInicio, valorFinal, incremento;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valorInicio);
    printf("digite o útimo valor: ");
    scanf("%d", &valorFinal);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    while (valorInicio<=valorFinal){
        
        printf("%d ", valorInicio);
        valorInicio += incremento;
    }
    return 0;
}