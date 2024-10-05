#include<stdio.h>
#include<string.h>

int main (void){
    char Input_from_question[1000];

    scanf("%s", Input_from_question);

    int tamanho = strlen(Input_from_question);

    printf("%d", tamanho);
}