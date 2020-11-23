#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 notas e mostra o valor absoluto entre elas
    float nota1, nota2, resultado;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    resultado = nota1 - nota2;


    printf("A diferença absoluta entre %5.2f e %5.2f = %d ", nota1, nota2, abs(resultado));

}
