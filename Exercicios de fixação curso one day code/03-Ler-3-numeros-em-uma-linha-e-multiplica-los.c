#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 números inteiros de uma só vez
    //coloque os resultados da multiplicação entre os 3 em uma variavel própra,
    //depois exiba essa variavel.

    int nota1, nota2, nota3, resultado;
    printf("Digite as 3 notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    resultado = nota1 * nota2;
    printf("\n O resultado é: %d", resultado);

}
