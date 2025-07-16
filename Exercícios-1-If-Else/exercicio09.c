 /*--------------------------------------------------------------------------
    Dado o peso e a altura de uma pessoa, calcular o IMC e classificá-lo.
    IMC = Peso(KG)/Altura²(Metros).

    Classificação do IMC:
    Abaixo do peso: IMC menor que 18,5.
    Peso normal: IMC entre 18,5 e 24,9.
    Sobrepeso: IMC entre 25 e 29,9.
    Obesidade: IMC igual ou superior a 30. 
 ----------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Digite seu peso em Kg :\n",peso);
    scanf("%f", &peso);

    printf("Digite sua altura :\n",altura);
    scanf("%f", &altura);

    imc = (peso/(altura * altura));

    printf("Seu IMC eh igual a %.2f.\n",imc);

    if( imc < 18.5 ){

        printf("Voce esta abaixo do peso ideal.\n");

    } else if( (imc >= 18.5) && (imc <= 24.9) ){

        printf("Voce esta no peso ideal.\n");

    } else if( (imc >= 25) && (imc <= 29.9)){

        printf("Voce esta sobrepeso, tome cuidado.\n");

    } else{

        printf("Voce esta obeso! Procure ajuda.");

    }

    return 0;
}

//mmaximus-bit :)