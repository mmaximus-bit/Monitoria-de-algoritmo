/*
    Dado o valor de uma compra, aplicar um desconto de 10% se o valor for maior
    que R$ 100.
*/

#include <stdio.h>

int main(){

    float valor;

    printf("Digite o valor da sua compra :\n");

    printf("R$");
    scanf("%f", &valor);

    if(valor >= 100){

        printf("O valor da sua compra eh de R$%.2f, com o desconto de 10 Porcento, o total eh R$%.2f", valor, valor - valor *0.1);

    } else{

        printf("O valor da sua compra eh de R$%.2f, pois o valor da compra não superou R$100",valor);
    }

    
    return 0;
    
}

//mmaximus-bit :)