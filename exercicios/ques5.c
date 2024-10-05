#include<stdio.h>
#include<string.h>

int main(void){
    char nome[10], nomeInvertido[10];

    printf("Digite seu nome: ");
    scanf(" %s", nome);

    int tamanho = strlen(nome);
    for (int i=0; i<tamanho; i++){
        nomeInvertido[i] = nome[tamanho-1-i];
    }
    printf("Nome invertido: %s", nomeInvertido);
    return 0;
}