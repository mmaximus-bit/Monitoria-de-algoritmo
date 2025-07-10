/*
    Dado um número, determinar se ele é positivo, negativo ou zero.
*/


#include <stdio.h>

int main(){

    float num;

    printf("Ola digite um numero qualquer :");
    scanf("%f",&num);

    if(num < 0){

        printf("Seu numero eh negativo.");
    }
    
    else if (num > 0)
    {
        printf("Seu numero eh positivo.");
    } 
    
    else {

        printf("Seu numero eh igual a zero.");
    }
    
    return 0;
}