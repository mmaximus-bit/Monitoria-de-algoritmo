/*
    Dadas três notas de um aluno, calcular a média e verificar se ele foi aprovado
    (média >= 7).
*/

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;//Mais pra frente vamos aprender a usar arrays, fica bem mais fácil :)

    printf("Digite a primeira nota :\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota :\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota :\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/ 3;

    if(media < 7){

        printf("Sua media foi %.2f, logo voce esta reprovado. :( \n", media);//Usamos "%.2f" para limitar à apenas 2 casa decimais
    } else{

        printf("Parabens sua media foi %.2f logo voce esta aprovado!! :)\n");
    }

    return 0;
}

//mmaximus-bit :)