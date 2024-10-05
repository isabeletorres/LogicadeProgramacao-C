#include<stdio.h>

int main(void){
    int lista[10], numBuscado=0, inicio=0, fim=9, meio=0, encontrado=0;

    for(int i=0; i<10; i++){
        printf("[%d]", i);
        scanf("%d", &lista[i]);
    }
    for(int i=0; i<9; i++){
        for(int j=i+1; j<10; j++){
            if(lista[i]>lista[j]){
                int aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
    for (int i=0; i<10; i++){
        printf("[%d] ", lista[i]);
    }
    printf("Digite um nnúmero para buscar dentro do array: ");
    scanf("%d", &numBuscado);

    while(inicio<=fim){
        meio = (inicio+fim)/2;

        if(lista[meio]==numBuscado){
            printf("Número %d encontrado na posição [%d] do array.\n", numBuscado, meio);
            encontrado = 1;
            break;
        } else if(lista[meio]<numBuscado){
            inicio = meio +1;
        } else {
            fim = meio -1;
        }

    }
    
    if (!encontrado){
        printf("O número %d não foi encontrado.", numBuscado);
    }

    return 0;
}