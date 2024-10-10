#include<stdio.h>

int main(void){
    int codigo1=0, codigo2=0, qtd1=0, qtd2=0;
    float va1=0, va2=0;

    printf("peça 1:");
    scanf("%d %d %f", &codigo1, &qtd1, &va1 );
    printf("peça 2:");
    scanf("%d %d %f", &codigo2, &qtd2, &va2 );

    float valorTot = (qtd1 * va1) + (qtd2 * va2);

    printf("VALOR A PAGAR: %.2f", valorTot);
    return 0;
}