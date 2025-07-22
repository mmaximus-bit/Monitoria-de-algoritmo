/*---------------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro positivo e calcule seu fatorial.
-----------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N, fatorial = 1;

    printf("Digite um numero inteiro positivo qualquer : ");
    scanf("%d", &N);

    if( N < 0){

        printf("O numero deve ser positivo :(");

        return 1;
    } else{

        for(int i = N; i > 0; i-- ){

            fatorial *= i;

        } 

        printf("O fatorial de %d! eh igual a %d.", N, fatorial);
    }

    return 0;

}