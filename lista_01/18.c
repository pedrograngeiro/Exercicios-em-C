#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Vari�veis
    char palavra[10];

    //Instru��o
    printf("Digite uma palavra");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //L� a string
    fgets(palavra, 255, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra) -1]='\0';

    //Imprime na tela
    printf("%s", palavra);

    //Pausa o programa ap�s exercutar
    printf("\n");
    system("pause");
}

