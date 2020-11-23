#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, resultado; 
    int operacao = 9;

    printf("\n (1) somar:\n");
    printf("\n (2) subt:\n");
    printf("\n (3) mult:\n");
    printf("\n (4) div.:\n");
    printf("\n (0) para encerrar o programa.");


    while(operacao!=0){


        printf("Digite o numero da operacao: ");
        scanf("%i", &operacao);

        if (operacao!=0){
            printf("\nDigite o primeiro num1:");
            scanf("%f", &num1);
            printf ("\n digite o segundo num2:");
            scanf("%f", &num2);
        }


        if ( operacao==1){
            resultado = num1 + num2;
            printf("\n %f \n", resultado);

        }
        else if (operacao==2){
            resultado = num1 - num2;
            printf("\n%f\n", resultado);

        }
        else if ( operacao==3){

            resultado = num1 * num2;
            printf("\n %f \n", resultado);
        }

        else if(operacao==4){
            resultado = num1/num2;
            printf("\n %f \n", resultado);
        }

    }

    return 0;
}
