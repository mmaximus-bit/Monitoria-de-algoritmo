/*---------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro N e exiba todos os números
    primos de 1 até N
-----------------------------------------------------------------------------*/

#include<stdio.h>

int main(){
    
    int N,contador_de_divisores, i = 1;

    printf(" Digite um numero inteiro positivo qualquer: ");
    scanf("%d", &N);

    if( N < 1){

        printf("ERRO: O número deve ser maior que ou igual a 1");

        return 1;
    }

    printf("Os numeros primos de 1 ate %d sao :\n",N);

    for( i = 1; i <= N; i++){

        contador_de_divisores = 0;

        for(int j = 1; j <= i; j++){

            if( i % j == 0){

                contador_de_divisores++;

            }
        }

         if(contador_de_divisores == 2){

        printf("%d\n", i);

    }
    }

   

    return 0;
}

//mmaximus-bit :)