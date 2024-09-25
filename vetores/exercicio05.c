// Leia um vetor A com 6 elementos do tipo real. Construir um vetor B, em que cada posição de índice ímpar do vetor B deve ser atribuída com um elemento de índice par existente no vetor A e cada posição de índice par do vetor B deve ser atribuída com um elemento de índice ímpar existente no vetor A. Apresentar os elementos dos dois vetores.

#include <stdio.h>

int main() {
    int vetorA[6], vetorB[6];
    
    for (int i=0; i<6; i++){
        printf("A[%d] ", i);
        scanf("%d", &vetorA[i]);
    }
    for (int i=0; i<6; i++){
        if (i%2==0){
            vetorB[i] = vetorA[i+1];
        } else {
             vetorB[i] = vetorA[i-1];
        }
    }
    printf("Vetor A\n");
    for (int i=0; i<6; i++){
        printf("[%d] ", vetorA[i]);
        
    }
    printf("Vetor B\n");
    for (int i=0; i<6; i++){
        printf("[%d] ", vetorB[i]);
        
    }
 
    return 0;
}