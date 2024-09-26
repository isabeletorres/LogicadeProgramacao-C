//) Crie um programa que tenha uma função Media(), que vai receber as 2 notas de um aluno e retornar a sua média para o programa principal.

#include <stdio.h>
float Media(float x, float y){
    return (x+y)/2;
}
int main() {
    float nota1, nota2, media;
    
    printf("Digite a 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2° nota: ");
    scanf("%f", &nota2);

    media = Media(nota1, nota2);
    printf("A media é: %.2f", media);
    return 0;
}