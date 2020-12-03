#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um agloritmo que leia 3 valores para um vetor de 3 posiçõaes
    //e depois calcule a média dos valores acessando o vetor.
    int tam, i;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tam);


    float vetor[tam], media, resultado;
    media = 0;


    for(i = 0; i < tam; i++){
        printf("\nDigite um valor:");
        scanf("%f", &vetor[i]);
        printf("\nvetor[%d] = %.2f", i, vetor[i]);

        media = media + vetor[i];

        if(i+1 == tam){
            resultado = media / tam;
            printf("\nA média é: %.2f", resultado);
        }
    }
}
