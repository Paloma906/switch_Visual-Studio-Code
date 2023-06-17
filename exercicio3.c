#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa que simule as 4 operações matemáticas básicas.
A entrada para a escolha de uma das 4 operações disponíveis é dada da seguinte forma: • Soma
• Subtração
• Multiplicação
• Divisão
Seguida dos 2 operandos que participarão efetivamente da operação.
*/

float calcularOperacao(float n1,float n2,int opcao){

    float resultado;

    if (opcao == 1){

        resultado = n1 + n2;
        return resultado;
    }

    if (opcao == 2){

       resultado = n1 - n2;
        return resultado;
    }

    if (opcao == 3){
        
        resultado = n1 * n2;
        return resultado;

    }

    if (opcao == 4){

        resultado = n1/n2;
        return resultado;
    }


}

int main()
{
    int opcao;
    float numero1, numero2;
    

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite a opcao que deseja:");
    scanf("%d", &opcao);

    float resultado = calcularOperacao(numero1,numero2,opcao);

    switch (opcao)
    {
    case 1:
       
        printf("SOMA: %.2f\n",resultado);
        break;

    case 2:
        printf("SUBTRACAO: %.2f\n",resultado);
        break;
    case 3:
        printf("MULTIPLICACAO: %.2f\n",resultado);
        break;
    case 4:
        printf("DIVISAO: %.2f\n",resultado);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    

    return 0;
}
