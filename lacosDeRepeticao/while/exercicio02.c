

#include <stdio.h>

int main (void){
    int numero=0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    int i =numero;
    while (i>=1){
        if (i%4==0){
            printf("[%d] ", i);
        } else{
            printf("%d ", i);
        }
        
        i--;
    }
    printf("Acabou");
    return 0;
}