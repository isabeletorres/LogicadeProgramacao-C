//Desenvolva um programa usando a estrutura “para” que mostre na tela a seguinte contagem: 0 5 10 15 20 25 30 35 40 Acabou!

int main() {
    
    for(int i=0; i<41; i+=5){
        printf("%d ", i);
    }
    printf("Acabou!");
    return 0;
}