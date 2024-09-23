//Crie um programa que leia o tamanho de três segmentos de reta.Analise seus comprimentos e diga se é possível formar um triângulo com essas retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois.

#include <stdio.h>

int main (void){
    int seguimento1, seguimento2, seguimento3;

    printf("Digite o tamanho do 1° seguimeto de reta: ");
    scanf("%d", &seguimento1);
    printf("Digite o tamanho do 2° seguimeto de reta: ");
    scanf("%d", &seguimento2);
    printf("Digite o tamanho do 3° seguimeto de reta: ");
    scanf("%d", &seguimento3);

    if (seguimento1<seguimento2+seguimento3 && seguimento2<seguimento1+seguimento3 && seguimento3<seguimento2+seguimento2){
        printf("É possível criar um triâgulo com essas retas");
    } else {
        printf("Não é possível criar um triâgulo com essas retas");
    }
    return 0;
}