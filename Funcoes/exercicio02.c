// Crie uma lógica que leia um número inteiro e passe para um procedimento ParOuImpar() que vai verificar e mostrar na tela se o valor passado como parâmetro é PAR ou ÍMPAR.

#include<stdio.h>
void ParOuImpar( int x){
    if (x%2==0){
        printf("Par");
    } else {
        printf("Ímpar");
    }
}
int main(void){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    ParOuImpar(numero);
}