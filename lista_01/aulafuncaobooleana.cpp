#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool retornaBooleano(){
    return true;
}

int main(){
    //Definindo variaveis
    bool variavelBooleana;

    //Variaveis recebendo booleano
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro");
    }//SE n�o executa o segundo bloco
    else{
        printf("Eh falso!");
    }

    //Return da fun��o
    return 0;
}
