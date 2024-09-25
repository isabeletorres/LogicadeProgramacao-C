//Elabore um algoritmo que solicite/leia dados, do tipo caractere, em dois vetores (A e B) de 10 elementos cada, simultaneamente. Gerar um terceiro vetor (C) de mesmo tamanho e tipo, sendo o resultado da união dos dois vetores  anteriores, isto é, cada elemento do vetor C será formado pela concatenação do conteúdo do elemento A e elemento B. Exemplo: A[1]=“abc” e B[1]=”def” resulta em C[1]=”abcdef” Considere que os vetores poderão ter caracteres repetidos.  Antes de encerrar o algoritmo mostre o conteúdo dos 3 vetores.
#include <stdio.h>
#include<string.h>
int main() {
    char vetorA[10][50], vetorB[10][50], vetorC[10][50];

    
    for(int i=0; i<10; i++){
        printf("A[%d]", i);
        scanf(" %s", &vetorA[i]);
        printf("B[%d]", i);
        scanf(" %s", &vetorB[i]);
    }
    
    for(int i=0; i<10; i++){
        strcpy(vetorC[i], vetorA[i]);
        strcat(vetorC[i], vetorB[i]);
    }    

    printf("Vetor C: \n");
    for(int i=0; i<10; i++){
        printf("[%s] ", vetorC[i]);
    }
    return 0;
}