//Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontospara todos, mas especialmente para mulheres. Faça um programa que leia nome,sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendoque: - Homens ganham 5% de desconto - Mulheres ganham 13% de desconto

#include <stdio.h>

int main (void){
    char  sexo;
    float valor;

    
    printf("Digite seu sexo [M/F]");
    scanf("%c", &sexo);
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    if (sexo=='F' || sexo == 'f'){
        float desconto = valor - (valor*0.13);
        printf("O desconto foi de: %.1f", desconto);
    } else if (sexo=='M' || sexo == 'm'){
        float desconto = valor - (valor*0.05);
        printf("O desconto foi de: %.1f", desconto);
    } else {
        printf("Sexo inválido");
    }
    return 0;
}