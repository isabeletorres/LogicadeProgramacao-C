//Escreva um programa para aprovar ou não o empréstimo bancário para a compra de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30% do salário ou então o empréstimo será negado.

#include<stdio.h>

int main (void){
    float valorCasa, salario;
    int anosPagando;

    printf("Valor casa: ");
    scanf("%f", &valorCasa);
    printf("Valor salário: ");
    scanf("%f", &salario);
    printf("Digite por qunato tempo você pretende pagar: ");
    scanf("%d", &anosPagando);


    float prestacaoMensal = valorCasa/(anosPagando*12);

    if (prestacaoMensal>(salario*0.3)){
        printf("O emprestimo foi negado, pois o valor da parcela mensal (%.2f) é superior a parte correspondente do 30/100 do seu salário (%.2f)", prestacaoMensal, salario*0.3);
    } else {
        printf("O emprestimo foi aprovado, e a prestação mensal será no valor de %.2f", prestacaoMensal);
    }
    return 0;
}