//  Calcule a tabuada de um valor qualquer de 1 até 10 e armazene os resultados em um vetor T. Apresentar os elementos do vetor T.
#include <stdio.h>

int main() {
    int vetorT[10], numero=0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for(int i=0; i<10; i++){
        vetorT[i] = (i+1)*numero;
    }

    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n", numero, i+1, vetorT[i]);
    }

    return 0;
}