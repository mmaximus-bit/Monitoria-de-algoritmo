/*
    Dado um número, determinar se ele é positivo, negativo ou zero.
*/

// O comando "\n" serve para quebra de linha.

#include <stdio.h>

int main(){

    float num;

    printf("Ola digite um numero qualquer :\n");
    scanf("%f",&num);

    if(num < 0){

        printf("Seu numero eh negativo.\n");
    }
    
    else if (num > 0)
    {
        printf("Seu numero eh positivo.\n");
    } 
    
    else {

        printf("Seu numero eh igual a zero.\n");
    }
    
    return 0;
}

//mmaximus-bit :)