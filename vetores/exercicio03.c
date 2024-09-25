//Ler dois vetores A e B com 5 elementos quaisquer inteiros. Construir um vetor C, sendo este o resultado da junção dos vetores A e B. Desta forma, o vetor C deve ter o dobro de elementos em relação aos vetores A e B, ou seja, o vetor C deve possuir 10 elementos. Apresentar o vetor C.
#include <stdio.h>

int main() {
    int vetorA[5];
    for(int i=0; i<5; i++){
        printf("A[%d] ", i);
        scanf("%d", &vetorA[i]);
    }
    int vetorB[5];
    printf("\n");
    for(int i=0; i<5; i++){
        printf("B[%d] ", i);
        scanf("%d", &vetorB[i]);
    }
    int vetorC[10];
    for(int i=0; i<5; i++){
        vetorC[i] = vetorA[i];
        vetorC[i+5] = vetorB[i];
    }
    printf("Vetor C\n");
    for(int i=0; i<10; i++){
        printf("[%d] ", vetorC[i]);
        
    }
    return 0;
}