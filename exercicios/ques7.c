#include<stdio.h>

int fibonacci(int num){
    if (num ==0){
        return 0;
    } else if(num==1){
        return 1;
    } else{
        return fibonacci(num-1) + fibonacci(num-2); 
    }
}

int main(void){
    int numero;
    printf("Digite o nésimo número");
    scanf("%d", &numero);

    int fibo[numero];
    for (int i=0; i<numero; i++){
        fibo[i] = fibonacci(i);
    }
    for (int i=0; i<numero; i++){
       printf("[%d]", fibo[i]);
    }
    return 0;
}