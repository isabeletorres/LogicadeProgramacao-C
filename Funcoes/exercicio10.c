//Faça um programa que possua uma função chamada Potencia(), que vai receber dois parâmetros numéricos (base e expoente) e vai calcular o resultado da exponenciação. Ex: Potencia(5,2) vai calcular 52 = 25 
#include <stdio.h>

float Media(float x, float y){
    return (x+y)/2;
}
int Situacao(int x){
    if (x>=7){
        return 0;
    } else if (x<7){
        return 1;
    }
}
int main() {
    float nota1, nota2, media, situacao;
    
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);

    media = Media(nota1, nota2);
    printf("A media é: %.2f", media);
    
    situacao = Situacao(media);
    if(situacao == 0){
        printf(" O aluno foi aprovado");
    } else {
        printf(" O aluno foi reprovado");
    }
    return 0;
}