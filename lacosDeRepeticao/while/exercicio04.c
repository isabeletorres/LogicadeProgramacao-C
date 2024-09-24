
#include <stdio.h>

int main(void){
    int valorInicio, valorFinal, incremento;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valorInicio);
    printf("digite o útimo valor: ");
    scanf("%d", &valorFinal);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    if (valorInicio<valorFinal){
        while (valorInicio<=valorFinal){
            printf("%d ", valorInicio);
            valorInicio += incremento;
        }
    } else {
        while (valorInicio>=valorFinal){
            printf("%d ", valorInicio);
            valorInicio -= incremento;
        }
    }
   
    return 0;
}