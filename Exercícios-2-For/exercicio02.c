/*-------------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro e exiba sua tabuada de 1 a 10.
---------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N, tabuada;

    printf("Digite um numero inteiro qualquer :");
    scanf("%d", &N);

    for( int i = 1; i <= 10; i++){

        tabuada = i * N;

        printf(" %d X %d = %d\n",N, i, tabuada);

    }

    return 0;
}


//mmaximus-bit :)