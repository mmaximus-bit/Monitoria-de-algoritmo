/*
    Dado um número, verificar se ele está no intervalo [10, 50].
*/

#include <stdio.h>

int main(){

    float num;

    printf("Digite um numero qualquer:");
    scanf("%f", &num);

    if(num >= 10 && num <= 50 ){

        printf("O numero %.2f esta no intervalo [10,50]",num);
    } else{

        printf("O numero %.2f nao esta no intervalo [10,50]",num);
    }

    return 0;
    
}

//mmaximus-bit :)