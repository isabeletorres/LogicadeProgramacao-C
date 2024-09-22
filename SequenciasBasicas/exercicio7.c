//Faça um algoritmo que leia a largura e altura de uma parede, calcule emostre a área a ser pintada e a quantidade de tinta necessária para o serviço, sabendo que cada litro de tinta pinta uma área de 2metros quadrados.

#include <stdio.h>

int main (void){
    float largura=0, altura=0;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite a largura: ");
    scanf("%f", &largura);

    float area = altura*largura;
    float litros = area*2;

    printf("A área ser pintada será %.1f metros. A quantidade de litros de tinta será %.1f", area, litros);
    return 0;
}