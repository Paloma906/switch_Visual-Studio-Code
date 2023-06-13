#include <stdio.h>
#include <stdlib.h>

/*O cardápio de uma casa de lanches é dado pela tabela abaixo:

(Código:)               (Produto:)             (Preço Unitário:)

100                     Cachorro quente            R$ 1,70
101                     Bauru Simples              R$ 2,30
102                     Bauru com ovo              R$ 2,60
103                     Hambúrguer                 R$ 2,40
104                     Cheeseburguer              R$ 2,50
105                     Refrigerante               R$ 1,00

Escreva um algoritmo que leia o código do item adquirido pelo consumidor e a quantidade, calculando e mostrando o valor a pagar. Não será necessário exibir o produto e o valor, somente o valor final.
*/

float mostrarValorTotal(int quantidade, float preco){

    float valortotal;
   // int opcao;
    //printf("Digite a quantidade do produto que deseja:\n");
    //scanf("%d",&quantidade);

    //printf("Digite o preco:");
   // scanf("%f",preco);[]

    valortotal = quantidade * preco;

    return valortotal;
/*
    if (opcao == 100){
        valortotal = quantidade * preco;
    }

    if (opcao == 101){
        valortotal = quantidade * preco;
    }

    if (opcao == 102){
        valortotal = quantidade * preco;
    }

    if (opcao == 103){
        valortotal = quantidade * preco;
    }
    
    if (opcao == 104){
        valortotal = quantidade * preco;
    }

    if (opcao == 105){
        valortotal = quantidade * preco;
    }
*/
}

int main()
{

    int opcao, quantidade;
    float preco;

    printf("100 - cachorro quente \n");
    preco = 10;
    printf("101 - Bauru Simples \n");
    printf("102 - Bauru com ovo \n");
    printf("103 - Hamburguer \n");
    printf("104 - Cheeseburguer \n");
    printf("105 - Refrigerante \n");


    printf("Digite o codigo que deseja:");
    scanf("%d", &opcao);

    printf("Digite a quantidade do produto que deseja");
    scanf("%d", &quantidade);

    switch (opcao)
    {
    case 100:
       printf("Item: %d. quantidade: %d. precoTotal %f.",opcao, quantidade, mostrarValorTotal(quantidade, preco));
        break;
    case 101:
        mostrarValorTotal(quantidade, preco);
        break;
    case 102:
        mostrarValorTotal(quantidade, preco);
        break;
    case 103:
        mostrarValorTotal(quantidade, preco);
        break;
    case 104:
        mostrarValorTotal(quantidade, preco);
        break;
    case 105:
        mostrarValorTotal(quantidade, preco);
        break;

        default:
        printf("Opção incorreta.\n");
        break;
    }
}

/* switch (opcao)
    {
    case 100:
        valorHotDog(quantidade, preco);
        break;
    case 101:
        valorBauruSimples(quantidade, preco);
        break;
    case 102:
        valorBauruOvo(quantidade, preco);
        break;
    case 103:
        valorHamburguer(quantidade, preco);
        break;
    case 104:
        valorCheeseburguer(quantidade, preco);
        break;
    case 105:
        valorRefrigerante(quantidade, preco);
        break;

        default:
        printf("Opção incorreta.\n");
        break;
    }
}*/
