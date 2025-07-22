/*--------------------------------------------------------------------------
    Escreva um programa que leia N números inteiros e calcule a média deles.
----------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int N;
    float num, media, soma = 0;

    printf("Digite a quantidade de numeros que voce quer calcular a media: ");
    scanf("%d", &N);

    if( N < 0){

        printf("Erro: Voce digitou um numero negativo.");

        return 1;

    }

    printf("Perfeito, digite os %d numeros.\n",N);

    for( int i = 0; i < N; i++){

        printf("Digite o %d numero: ", i + 1 );
        scanf("%f", &num);

        soma += num;
    }

    media = soma/N;

    printf("A media dos seus numeros digitados eh igual a %.2f", media);

    return 0;
    
}

//mmaximus-bit :)