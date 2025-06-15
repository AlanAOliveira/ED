#include <stdio.h>

int fat(int num){

    if(num <=1)
        return 1;
        
    return num * fat(num - 1);
}

void main(){
    int num;

    printf("Escolha um numero natural(nao negativo e inteiro): ");
    scanf("%i", &num);
    if(num < 0){
        printf("%i não e valido", num);
        return;
    }

    printf("fatorial de %i: %i", num, fat(num));
}