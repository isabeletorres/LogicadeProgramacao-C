//Ler um vetor W de 10 elementos, depois ler um valor V. Contar e escrever quantas vezes o valor V ocorre no vetor W e escrever também em que posições (índices) do vetor W o valor V aparece. Caso o valor V não ocorra nenhuma vez no vetor W, escrever uma mensagem informando isto.
#include<stdio.h>

int main (void){
    int vetorW[10];

    for(int i=0; i<10; i++){
        printf("W[%d]: ", i);
        scanf("%d", &vetorW[i]);
    }

    int valor;
    printf("Digite um valor de pesquisa: ");
    scanf("%d", &valor);

    int ocorrencia;
    for(int i=0; i<10; i++){
        if (vetorW[i]==valor){
            printf("O valor ocorreu na posição: [%d]\n", i);
            ocorrencia++;
        }
    }
    if (ocorrencia>0){
        printf("%d vezes", ocorrencia);
    } else {
        printf("\nO valor %d não ocorre no vetor W.\n", valor);
    }   
    
}