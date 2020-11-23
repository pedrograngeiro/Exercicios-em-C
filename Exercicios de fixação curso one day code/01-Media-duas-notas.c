#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 notas e mostre a média entre elas
    float a, b, resultado;
    a = 0;
    b = 0;
    resultado = 0;

    printf("\n Calculadora de media entre 2 notas. ");
    printf("\n Digite a primeiro notas: ");

    //Leia a primeiro nota
    scanf("%f", &a);
    //Leia a segunda  nota
    printf("\n Digite a segunda nota: ");
    scanf("%f", &b);

    //Calcula média
    resultado = (a + b) / 2;

    //Mostra o resultado da operacao
    printf("A media entre %5.2f e %5.2f é: %5.2f", a,b, resultado);


}
