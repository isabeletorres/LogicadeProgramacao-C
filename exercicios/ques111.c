#include<stdio.h>

int main (void){
    int codigo = 0, qtd=0;
   
    scanf("%d %d", &codigo, &qtd);

    float valor=0;

    switch (codigo){
        case 1:  valor = (qtd*4);
            break;
        case 2: valor = (qtd*4.5);
            break;
        case 3: valor = (qtd*5);
            break;
        case 4: valor = (qtd*2);
            break;
        case 5: valor = (qtd*1.5);
        break;
            default:
            break;
    }
    printf("Total: %.2f", valor);
    return 0;
}