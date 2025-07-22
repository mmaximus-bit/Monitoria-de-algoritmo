/*------------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro N e exiba o quadrado de todos
    os números de 1 até N.
--------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N, quadrado;

    printf("Digite um numero inteiro positivo qualquer: ");
    scanf("%d",  &N);

    if(N < 1){

        printf("Erro: O numero deve ser igual ou maior que 1 :(");//Nosso usuário precisa de instruções claras :)

        return 1;
    }

    for( int i = 1; i <= N; i++){

        quadrado = i * i;

        printf("O quadrado de %d eh %d \n", i, quadrado);

        break;

    }

    return 0;
}  


//mmaximus-bit :)