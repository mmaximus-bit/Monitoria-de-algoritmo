/*
    Dado três lados, determinar se formam um triângulo equilátero, isósceles ou
    escaleno.
*/
#include <stdio.h>

int main(){

    float lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado :\n");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado :\n");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado");
    scanf("%f", &lado3);

    if((lado1 == lado2) && (lado2 == lado3)){

        printf("Todos os lados sao iguais logo eh um triangulo equilatero\n");
    } else if (lado1 == lado2  || lado1 == lado3 || lado3 == lado2)

    {
        printf("Possui apenas dois lados iguais logo eh um triangulo isosceles\n");
    } else{

        printf("Todos os lados são diferentes logo eh um triangulo escaleno.\n");
    }

    return 0;
    
}

//mmaximus-bit :)