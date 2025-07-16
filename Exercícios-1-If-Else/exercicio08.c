/*
    Dado um número, verificar se ele é divisível por 3 e 5 ao mesmo tempo.
*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro qualquer :\n");
    scanf("%d", &num);

    if( (num % 3 == 0) && (num % 5 == 0)){

        

        printf("O seu numero eh divisivel por 3 e por 5 ao mesmo tempo. \n");


    } else{



        printf("O seu numero nao eh divisel por 3 e 5 ao mesmo tempo.");


    }


    return 0;
}

//mmaximus-bit :)