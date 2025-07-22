/*-------------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro N e calcule a soma de todos os
    números ímpares de 1 até N.
---------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N, soma = 0;

    printf("Digite um numero inteiro qualquer :");
    scanf("%d", &N);

    for(int i = 0; i <= N; i++){

        if( i % 2 != 0){

            soma += i;

        }

    }

    printf("A soma dos numeros impares ate %d eh igual a %d ",N, soma); //Novamente print fora do looping para não repetir.


    return 0;
}