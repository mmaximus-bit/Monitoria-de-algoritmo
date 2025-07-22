/*--------------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro positivo N e calcule a soma dos
    primeiros N números naturais.

    Vamos começar a mexer com for, ele é bem interessante para algumas funções,
    ele vai facilitar bastante nossa vida!! 
----------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N, soma;

    printf("Digite um numero inteiro positivo qualquer : ");
    scanf("%d", &N);

    if( N < 0){

        printf("O numero deve ser postivo");
        return 1;
       
    }else{

         for( int i = 0; i <= N; i++){

            soma += i; 
        }

        printf("A soma dos primeiros numeros naturais eh %d", soma);
    }

    return 0;
}

//mmaximus-bit :)