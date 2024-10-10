#include<stdio.h>
int main (void){
    int senhaCerta=2002, senha;

    scanf("%d", &senha);

    while (senha != senhaCerta){
        printf("Senha inválida.");
        scanf("%d", &senha);
    }
    printf("Acesso permitido");
    return 0;
}