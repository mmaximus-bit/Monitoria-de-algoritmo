/*------------------------------------------------------------------------------
    Dado o valor de uma compra, aplicar um desconto de 5% para pagamento à vista
    ou um acréscimo de 10% para parcelamento.

    Futuramente aprenderemos a construir menus :) Os códigos desse tipo de 
    exercício ficaram bem mais bonitos e intuitivos ;)
--------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    int formapagamento;
    float valordacompra, valorfinal;
    

    printf("Digite o valor da compra por favor :\n");

    printf("R$");
    scanf("%f", &valordacompra);

    printf("Qual sera sua forma de pagamento?\n");
    printf("1 - Pagamento a vista.\n");
    printf("2 - Pagamento parcelado.\n");
    scanf("%d", &formapagamento);

    if( formapagamento == 1){

        valorfinal = (valordacompra * 0.95);

        printf("Ola! Desconto para pagamento a vista aplicado! Valor total da compra : R$%.2f",valorfinal);
        
    } else if( formapagamento == 2){

        valorfinal = (valordacompra + (valordacompra * 0.1));

        printf("Ola! Acrescimo de parcelamento adicionado!, Valor total da compra : R$%.2f", valorfinal);

    }


    return 0;
}

//mmaximus-bit :)