#include<stdio.h>

int main(void){

    for(int i=0; i<100; i++){
        if((i+1)%3==0){
            printf(" Fizz ||");
        }else if ((i+1)%5==0){
            printf(" Buzz ||");
        } else {
            printf("%d ||", i+1);
        }
    }


    return 0;
}