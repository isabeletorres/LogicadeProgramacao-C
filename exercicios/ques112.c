#include<stdio.h>
#include<math.h>
int main (void){
    float a=0, b=0, c=0;

    scanf("%f %f %f", &a, &b, &c);

    float delta =  pow(b,2) - 4*a*c;

    if(a==0 || delta <0) {
        printf("Impossível calcular");
    } else {
        float x1 = (-b + sqrt(delta))/ (2*a); 
        float x2 = (-b - sqrt(delta))/ (2*a); 
        printf("%.5f %.5f", x1, x2);
    }
    return 0;
}