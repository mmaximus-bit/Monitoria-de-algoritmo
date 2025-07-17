/*
    Dado um ano qualquer, veriicar se ele é bissexto.
*/

#include <stdio.h>

int main(){

    int ano;

    printf("Digite um ano qualquer :\n");
    scanf("%d", &ano);

    if((ano % 4 == 0) && (ano % 100 != 0)|| (ano % 400 == 0) ){

        printf("O ano %d eh um ano bissexto.\n", ano);
    } else{

        printf("O ano %d nao eh um ano bissexto.\n", ano);

    }

    return 0;
}
//Um ano bissexto é divisível por 4 e só é divisível por 100 se ao mesmo tempo for divisível por 400

//mmaximus-bit :)