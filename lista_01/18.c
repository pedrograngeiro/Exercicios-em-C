#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Variáveis
    char palavra[10];

    //Instrução
    printf("Digite uma palavra");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Lê a string
    fgets(palavra, 255, stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra) -1]='\0';

    //Imprime na tela
    printf("%s", palavra);

    //Pausa o programa após exercutar
    printf("\n");
    system("pause");
}

