#include<stdio.h>

int main(void){
    
    int fatorial=1, num=0;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        fatorial *=i;
    }
    printf("fatorial: %d", fatorial);
    return 0;
}