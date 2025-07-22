/*---------------------------------------------------------------------------
    Escreva um programa que leia um número inteiro e exiba o número invertido
-----------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int numero, reverso = 0, resto;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (reverso = 0; numero != 0; numero /= 10) {
        resto = numero % 10;
        reverso = reverso * 10 + resto;
    }

    printf("O número invertido é: %d\n", reverso);

    return 0;
}

//mmaximus-bit :)