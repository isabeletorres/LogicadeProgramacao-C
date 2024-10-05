#include<stdio.h>
#include<math.h>

int isPrimo(int numero){
    for (int i=2; i*i <=numero; i++){
        if(numero%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int num=0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num>1 && isPrimo(num)==1){
        printf("É primo");
    } else{
        printf("Não é primo");
    }

    return 0;
}