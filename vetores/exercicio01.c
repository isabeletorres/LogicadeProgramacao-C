 //Efetuar a leitura de 10 nomes de pessoas em um vetor N e apresente-os em seguida.
#include <stdio.h>

int main() {
    char nome[10][50];
    for (int i=0; i<10; i++){
        printf("Digite o %d° nome", i+1);
        scanf(" %s", &nome[i]);
    } 
    for (int i=0; i<10; i++){
        printf("[%s]", nome[i]);
        
    }
    

    return 0;
}