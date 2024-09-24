//O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e nopeso de uma pessoa. De acordo com o valor do IMC, podemos classificar o indivíduo dentro de certas faixas.- abaixo de 18.5: Abaixo do peso- entre 18.5 e 25: Peso ideal - entre 25 e 30: Sobrepeso - entre 30 e 40: Obesidade - acima de 40: Obseidade mórbida Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado da altura)
#include<stdio.h>
#include <math.h>

int main (void){
    float peso, altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    float IMC = peso/pow(altura, 2);
    if(IMC<0){
        printf("Você digitou algum dado errado");
    } else {
        if(IMC<18.5){
            printf("Você está abaixo do peso");
        } else if (IMC>=18 && IMC<25){
            printf("Peso ideal");
        } else if (IMC>=25 && IMC<30){
            printf("Sobrepeso");
        }else if (IMC>=30 && IMC<40){
            printf("Obesidade");
        } else {
            printf("Obesidade morbida");
        }
    }
    return 0;
}