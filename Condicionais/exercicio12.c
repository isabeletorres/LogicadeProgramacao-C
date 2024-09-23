//Faça um programa que leia a largura e o comprimento de um terreno retangular, calculando e mostrando a sua área em m². O programa também devemostrar a classificação desse terreno, de acordo com a lista abaixo:- Abaixo de 100m² = TERRENO POPULAR - Entre 100m² e 500m² = TERRENO MASTER - Acima de 500m² = TERRENO VIP

#include <stdio.h>

int main (void){
    float largura, comprimento;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite a comprimento do terreno: ");
    scanf("%f", &comprimento);

    float area = largura*comprimento;
    if (area<=0){
        printf ("Algum dados foi digitado erroneamente");
    } else{
        if (area<100){
            printf("TERRENO POPULAR. Area aproximadamente: %f", area);
        } else if(area>=100 && area<=500) {
            printf("TERRENO MASTER, Area de aproximadamente: %f", area); 
        } else {
            printf("TERRNO VIP, Area de aproximadamente: %f", area); 
        }
    }
    return 0;
}