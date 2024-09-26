//Refaça o exercício 04, só que agora em forma de função Maior(), mas faça uma adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o maior entre eles.

#include <stdio.h>

int  Maior(int x, int y, int z){
    if (x>y && x>z){
        return x;
    } else if (y>x && y>z){
        return y;
    } else if(z>x && z>y) {
        return z;
    } else {
        return 0;
    }
}

int main() {
    int valor1, valor2, valor3, maior;
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    printf("Valor 3: ");
    scanf("%d", &valor3);

    maior = Maior(valor1, valor2, valor3);
    if (maior>0){
        printf("O maior valor digitado foi: %d", maior);
    } else {
        printf("Você digitou dois ou mais números iguais");
    }
    

    return 0; 
}