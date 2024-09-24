//Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo de triângulo será formado:  - EQUILÁTERO: todos os lados iguais - ISÓSCELES: dois lados iguais - ESCALENO: todos os lados diferentes

#include <stdio.h>

int main (void){
    int seguimento1, seguimento2, seguimento3;

    printf("Digite o tamanho do 1° seguimeto de reta: ");
    scanf("%d", &seguimento1);
    printf("Digite o tamanho do 2° seguimeto de reta: ");
    scanf("%d", &seguimento2);
    printf("Digite o tamanho do 3° seguimeto de reta: ");
    scanf("%d", &seguimento3);

    if (!(seguimento1<seguimento2+seguimento3 && seguimento2<seguimento1+seguimento3 && seguimento3<seguimento2+seguimento2)){
        printf("Não é possível criar um triâgulo com essas retas");
    } else {
        if (seguimento1 == seguimento2 && seguimento2== seguimento3){
            printf("O triangulo é equilatero");
        } else if(seguimento1 == seguimento2 || seguimento2== seguimento3 || seguimento1== seguimento3){
            printf("O triangulo é isóceles");
        } else {
            printf("O triangulo é escaleno");
        }
    }
    return 0;
}