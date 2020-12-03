#include <stdio.h>
#include <stdlib.h>

char retornaletra(){
    return 'x';
}

int main(){

    //Definindo variaveis
    char letra;


    //char recebendo valor de uma função
    letra = retornaletra();

    //Imprimindo novo valor
    printf("%c", letra);

    return 0;
}
