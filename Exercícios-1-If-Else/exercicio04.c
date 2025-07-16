/*
    Dado dois números, determinar qual é o maior.
*/

#include <stdio.h>

int main(){

    float num1, num2;

    printf("Digite o primeiro numero :\n");
    scanf("%f", &num1);

    printf("Digite o segundo numero :\n");
    scanf("%f", &num2);

    if(num1 > num2){

        printf("O numero %.2f eh maior que o numero %.2f.\n", num1,num2);
    }else{

        printf("O numero %.2f eh maior que o numero %.2f.\n",num2,num1);
    }

    return 0;

}

//mmaximus-bit :)