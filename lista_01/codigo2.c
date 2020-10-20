//Exercício  2
//Dadas duas relações de nomes de clientes em potencial de uma companhia, e que se 
//encontram classificados alfabeticamente, escrever um programa em C que gere uma nova
//relação. Esta nova relação não contém nomes duplicados e deverá esta também  classificada 
//alfabeticomente. As relações tem 40 e 60 nomes respectivamente 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Função principal 
int main (){
	
	//Declaração de variavéis 
    int i, ii;
    char aux [100];
    char vetor[40][30] = {"Andre", "Maria", "Marcio", "Bruno", "Henrique", "Zoraide","Ana", "Daniel","Danilo", "Zuleica", "Adriano", }; /*Funciona com mais nomes*/
    char vetor2[60][30] = {"Carlos","Pedro","David","Lucas","Ana"}; /*Funciona com mais nomes*/
    char vetor3[100][30];
	
	for(i=0;i<40;i++){
		strcpy(vetor3[i],vetor[i]);
	}
	for(ii=0;ii<60;ii++){
		strcpy(vetor3[ii+i],vetor2[ii]);
	}
	for(i=0;i<40;i++){
        for(ii=0;ii<60; ii++){
            if(i!=ii){
                if (strcmp(vetor3[i], vetor3[ii]) == 0){
                    strcpy(vetor3[ii]," ");
                }
            }
        }
        printf("\n%s", vetor[i]);
	}

    //Pular linha
    printf("\n"); 
    
        for (i = 0; i < 100; i++){
              for (ii = i; ii < 100; ii++){
                    if (strcmp(vetor3[i], vetor3[ii]) >  0){
                          strcpy (aux, vetor3[i]);
                          strcpy (vetor3[i], vetor3[ii]);
                          strcpy (vetor3[ii], aux); }}}

    printf("vetor em ordem:\n\n");
    for (i = 0; i < 100; i++){
          printf("%s\n",vetor3[i]); }
	return  0; }
