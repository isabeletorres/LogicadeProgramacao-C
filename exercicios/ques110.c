#include<stdio.h>
#include<math.h>

int main (void){
    float raio=0;
    scanf("%f", &raio);
    float area = 3.14159 * pow(raio, 2);
    printf("A: %.4f", area);
    return 0;
}