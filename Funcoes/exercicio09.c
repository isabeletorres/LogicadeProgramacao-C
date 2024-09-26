//Faça um programa que possua uma função chamada Potencia(), que vai receber dois parâmetros numéricos (base e expoente) e vai calcular o resultado da exponenciação. Ex: Potencia(5,2) vai calcular 52 = 25 

#include <stdio.h>
#include <math.h>

int Potencia(int x, int y){
    return pow(x, y);
}

int main() {
    int base, expoente, potencia;
    printf("base: ");
    scanf("%d", &base);
    printf("expoente: ");
    scanf("%d", &expoente);

    potencia = Potencia(base, expoente);

    printf("%d elevado a %d é: %d ", base, expoente, potencia);
    return 0;
}