#include <stdio.h>
#include <stdlib.h>

// O cardápio de uma casa de lanches é dado pela tabela abaixo:

//(Código:)               (Produto:)             (Preço Unitário:)

// 100                     Cachorro quente            R$ 1,70
// 101                     Bauru Simples              R$ 2,30
// 102                     Bauru com ovo              R$ 2,60
// 103                     Hambúrguer                 R$ 2,40
// 104                     Cheeseburguer              R$ 2,50
// 105                     Refrigerante               R$ 1,00

// Escreva um algoritmo que leia o código do item adquirido pelo consumidor e a quantidade, calculando e mostrando o valor a pagar.
// Não será necessário exibir o produto e o valor, somente o valor final.

float Calcularvalor(int codigo, int quantidade)
{
    float valortotal = 0;

   switch (codigo)
        {

        case 100:
            valortotal = 1.70 * quantidade;
            break;
        case 101:
            valortotal = 2.30 * quantidade;
            break;
        case 102:
            valortotal = 2.60 * quantidade;
            break;
        case 103:
            valortotal = 2.40 * quantidade;
            break;
        case 104:
            valortotal = 2.50 * quantidade;
            break;
        case 105:
            valortotal = 1.0 * quantidade;
            break;
        default:
            printf("Codigo invalido!");
            break;
        }

    return valortotal;
}

int main()
{

    int codigo,quantidade;
    
    float valorApagar;

    printf("Digite a quantidade que deseja: ");
    scanf("%d", &quantidade);

    printf("Digite o codigo que deseja: ");
    scanf("%d", &codigo);

   valorApagar = Calcularvalor(codigo,quantidade);

    if (valorApagar > 0){
        printf("Valor a pagar: %.2f\n",valorApagar);
    }

    return 0;
}
