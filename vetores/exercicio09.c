//Elaborar um algoritmo que leia 8 elementos inteiros em um vetor. Coloque-os em ordem decrescente e apresente os elementos ordenados;

#include<stdio.h>

int main (void){
    int elementos[8];
    for (int i=0; i<8; i++){
        printf("[%d] ", i );
        scanf("%d", &elementos[i] );
    }
    int aux;
    for (int i=0; i<7; i++){
        for (int j=i+1; j<8; j++){
            if(elementos[i]<elementos[j]){
                aux = elementos[i];
                elementos[i] = elementos[j];
                elementos[j] = aux;
            }
        }
    }
   
     for (int i=0; i<8; i++){
        printf("[%d] ",elementos[i]);
    }
}