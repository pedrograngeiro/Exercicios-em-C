#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez
    //coloque os resultados da multiplica��o entre os 3 em uma variavel pr�pra,
    //depois exiba essa variavel.

    int nota1, nota2, nota3, resultado;
    printf("Digite as 3 notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    resultado = nota1 * nota2;
    printf("\n O resultado �: %d", resultado);

}
