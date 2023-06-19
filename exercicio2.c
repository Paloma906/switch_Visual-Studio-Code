#include <stdio.h>
#include <stdlib.h>

/*Suponha que você esteja desenvolvendo um programa para o caixa da mercearia do seu bairro. 
Esse programa deve ser capaz de somar o valor unitário de um produto do comércio recebendo como entrada apenas o código identificador dele. 
Para verificar o bom funcionamento da funcionalidade de soma de valor através do código você decidiu realizar testes apenas com uma parte dos produtos vendidos, para isso criou a seguinte tabela: 

Codigo                    Produto                 Valor unitário
100                      Detergente                R$ 1.59
101                       Esponja                  R$ 4.59
102                      Lã de aço                 R$ 1.79

Desenvolva o código que será utilizado para a realização dos testes com os três produtos selecionados.
*/

int main(){

    int codigo,quantidade;
    float valorTotal,soma;

    printf("Digite a quantidade: ");
    scanf("%d",&quantidade);

    printf("Digite a opcao que deseja:");
    scanf("%d",&codigo);

    switch (codigo)
    {
    case 100:

    printf("Detergente");
    valorTotal = 1.59*quantidade;
    printf("Soma:\n",valorTotal);
        
        break;

    case 101:

    printf("Esponja");
    valorTotal = 4.59*quantidade;
    printf("Soma:\n",valorTotal);

        break;

    case 102:

    printf("La de aco");
    valorTotal = 1.79*quantidade;
    printf("Soma:%f\n",valorTotal);

        break;
    
    default:

    printf("Codigo invalido!");
        break;
    }

    return 0;
}