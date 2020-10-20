//Exercício 1
//Fazer um programa em c que leia uma cadeia de caracteres e imprima as palavras 
//pertencentes a cadeia, da menor palavra a maior palavra . O caso que houver de palavras 
//com o mesmo tamanho, o critério da posição alfabética deverá determinar qual será  
//colocada na frente.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Função principal do programa 
char string[80];   /* uma frase de ate 80 caracteres */  
char vetor[80][30];/* cinquenta palavras de ate 30 caracteres cada */
char aux [80];
int i , j, Npalavras, k, tam_palavra;


int main(){
  tam_palavra = 0;
    Npalavras=1;
    printf("\nDigite Uma Frase De No Maximo 80 Caracteres: ");
    gets(string);
    for(i=0;i<strlen(string);i++){
        if(string[i]!=' '){
            vetor[j][k]=string[i];
            k++;
        }
        else{
            j++;
            k=0;
            Npalavras++;
        }
    }

    printf("\nO Texto Teve %d Palavras\n\n",Npalavras);
    
    //Mostra o tamanho da palavra
    for (i = 0; i <= Npalavras; i++){
	  tam_palavra = strlen(vetor[i]);
      printf("\nO tamanho da palavra eh %d \n", tam_palavra);
    }

    for(i=0;i<Npalavras;i++){
        printf("\nO Que Esta Armazenado Na Posicao %d Do Vetor => %s\n",i,vetor[i]);
    }
    
    //Organiza as palavras no vetor

        for (i = 0; i < strlen(vetor[i]); i++){
              for (j = i; j < strlen(vetor[j]); j++){
                    if (strcmp(vetor[i], vetor[j]) > 0){
                          strcpy (aux, vetor[i]);
                          strcpy (vetor[i], vetor[j]);
                          strcpy (vetor[j], aux); }}}

    printf("\nVetor em ordem:\n\n");
    for (i = 0; i < strlen(vetor[i]); i++){
          printf("%s\n",vetor[i]); }

		

    return 0;
}
