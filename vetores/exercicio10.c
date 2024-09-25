//Elaborar um algoritmo que leia 2 vetores A e B com 10 elementos inteiros cada. Construir um vetor C de mesmo tipo e dimensão que seja formado pela soma dos quadrados de cada elemento correspondentes dos vetores A e B. Ordenar e apresentar o vetor C em ordem decrescente.
#include <stdio.h>
#include <math.h>
int main (void){
    int A[10], B[10], C[10];
    for (int i=0; i<5; i++){
        printf("Digite os valores do vetor A: ");
        scanf("%d", &A[i]);
        printf("Digite os valores do vetor B: ");
        scanf("%d", &B[i]);
    }
    for (int i=0; i<5; i++){
        C[i] = pow(A[i], 2) + pow(B[i], 2);
    }
    for (int i=0; i<4; i++){
        for (int j=i+1; j<5; j++){
            if (C[i]<C[j]){
                int aux = C[i];
                C[i] = C[j];
                C[j] = aux;
            }
        }
    }
      for (int i=0; i<5; i++){
          printf("[%d] ", C[i]);
      }
    return 0;
}
