#include<stdio.h>

int main(void){

    int n=0, mais=0, menos=0, x=0;
    
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        if(x<=10 && x<20){
            mais++;
        } else {
            menos++;
        }
    }
    printf("%d in\n %d out", mais, menos);
    return 0;
}