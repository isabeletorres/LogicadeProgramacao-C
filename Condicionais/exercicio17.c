//Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a tabela a seguir: Carros populares (aluguel de R$90 por dia) Até 100Km percorridos: R$0,20 por Km Acima de 100Km percorridos: R$0,10 por Km Carros de luxo (aluguel de R$150 por dia) Até 200Km percorridos: R$0,30 por Km Acima de 200Km percorridos: R$0,25 por Km

#include<stdio.h>

int main (void){
    char tipoCarro[10];
    printf("Qual o tipo de carro que você deseja alugar? ");
    scanf("%s", &tipoCarro);

    int dias;
    printf("Quantos dias você alugar? ");
    scanf("%d", &dias);

    float kmPecorridos;
    printf("Quantos Quilometros serão pecorridos? ");
    scanf("%f", &kmPecorridos);

    float precoPagar=0;

    if (tipoCarro == 'popular'){
        if(kmPecorridos<=100){
            precoPagar = (90*dias) + (kmPecorridos*0.2);
        } else {
            precoPagar = (90*dias) + (kmPecorridos*0.1);
        }
    } else {
        if(kmPecorridos<=200){
            precoPagar = (150*dias) + (kmPecorridos*0.3);
        } else {
            precoPagar = (150*dias) + (kmPecorridos*0.25);
        }
    }

    printf("Você terá de pagar %.2f", precoPagar);
    return 0;
}