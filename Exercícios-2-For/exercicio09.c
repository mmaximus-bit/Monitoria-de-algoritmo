/*----------------------------------------------------------------------
    Escreva um programa que exiba os primeiros N números da sequência de
    Fibonacci.
------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, proximoTermo;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }

    printf("\n");

    return 0;
}

//mmaximus-bit :)