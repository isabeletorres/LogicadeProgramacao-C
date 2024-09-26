//Faça um programa que tenha um procedimento chamado Contador() que recebetrês valores como parâmetro: o início, o fim e o incremento de uma contagem. O programa principal deve solicitar a digitação desses valores e passá-los ao procedimento, que vai mostrar a contagem na tela.

#include <stdio.h>
void Contador(int x, int y, int z){
    for (int i=x; i<y; i+=z){
        printf("%d ", i);
    }
}
int main() {
    int inicio, fim, incremento;
    printf("Inicio: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);
    printf("Incremento: ");
    scanf("%d", &incremento);

    Contador(inicio, fim, incremento);
    return 0;
}