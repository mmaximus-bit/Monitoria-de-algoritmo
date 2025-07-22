/*---------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro N e exiba todos os números
    pares de 1 até N.
-----------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N;

    printf("Digite um numero inteiro positivo :");
    scanf("%d", &N);

    printf("Esses sao os numeros pares ate %d :\n", N); //Coloquei o print antes, para evitar que o mesmo entre em looping .

    for( int i = 1; i <= N; i++ ){

        if( i % 2 == 0 ){ //Para um numero ser par o resto da divisão desse número por 2 deve ser igual a zero.


            printf(" %d \n",i); // Ele só vai "printar" caso o numero seja par :)


        }

        break;// Serve para parar o looping, é mais uma boa prática no atual momento.
    }

    return 0;
}

//mmaximus-bit :)

