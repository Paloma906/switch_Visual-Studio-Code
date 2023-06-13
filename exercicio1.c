#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que receba como entrada um número inteiro  que represente um dos 7 dias da semana e imprima na tela se esse dia  é útil, final de semana ou inválido.
Considere que Domingo é o dia 1 e Sábado o dia 7.
*/

int main()
{
    int dia;

    setlocale(LC_ALL, "Portuguese" );
    printf("Digite um numero para o dia da semana:");
    scanf("%d", &dia);

    switch (dia)
    {
    case 7:
    case 1:
        printf("Final de semana.");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia util");
        break;
    default:
        printf("Dia invalido.");
    }
    return 0;
}