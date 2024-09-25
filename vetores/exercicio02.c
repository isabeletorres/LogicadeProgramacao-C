//Ler 5 elementos inteiros de um vetor X. Construir um vetor Y de mesmo tipo, observando a seguinte lei de formação: “todo elemento do vetor Y deve ser o quadrado do elemento do vetor X correspondente”. Apresentar os elementos dos vetores X e Y.
#include <stdio.h>
#include <math.h>
int main() {
    int vetorX[5], vetorY[5];
    for (int i=0; i<5; i++){
        printf("Digite um número: ");
        scanf("%d", &vetorX[i]);
    }
    for (int i=0; i<5; i++){
        vetorY[i] = pow(vetorX[i], 2);
    }
    printf("Vetor X\n");
    for (int i=0; i<5; i++){
        printf("[%d] ", vetorX[i]);
    }
    printf("\n");
    printf("Vetor Y\n");
    for(int i=0; i<5; i++){
        printf("[%d] ", vetorY[i]);
    }
    return 0;
}