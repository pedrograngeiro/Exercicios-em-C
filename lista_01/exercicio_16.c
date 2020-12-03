#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Questão 16 da lista

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	int d1j1,d2j1,d1j2,d2j2,k,rv1=0,rv2=0,sj1,sj2;

	srand((unsigned) time(NULL));

	for(k=1;k<=11;k++){
		d1j1=(rand()%6+1);
		printf("\n\nO primeiro dado do jogador 1: %d",d1j1);

		d2j1=(rand()%6+1);
		printf("\nO segundo dado do jogador 1: %d",d2j1);

		sj1=d1j1+d2j1;
		printf("\nA soma dos dados: %d",sj1);

		d1j2=(rand()%6+1);
		printf("\n\nO primeiro dado do jogador 2: %d",d1j2);

		d2j2=(rand()%6+1);
		printf("\nO segundo dado do jogador 2: %d",d2j2);

		sj2=d1j2+d2j2;
		printf("\nA soma dos dados: %d",sj2);

		if(d1j1==d2j1 && d1j2!=d2j2){
			rv1 = rv1+1;
			printf("\nO JOGADOR 1 VENCEU ESSA RODADA");
		}
		else if(d1j2==d2j2 && d1j1!=d2j1){
			rv2 = rv2+1;
			printf("\nO JOGADOR 2 VENCEU ESSA RODADA");
		}
		else{
			if(sj1>sj2){
				rv1=rv1+1;
				printf("\nO JOGADOR 1 VENCEU ESSA RODADA");
			}
			else if(sj2>sj1){
				rv2=rv2+1;
				printf("\nO JOGADOR 2 VENCEU ESSA RODADA");
			}
			else if(sj1==sj2){
				printf("\nESSA RODADA EMPATOU");
			}
		}
		}

		if(rv1>rv2){
			printf("\n\nO jogador 1 venceu");
		}
		else if(rv1<rv2){
			printf("\n\nO jogador 2 venceu");
		}
		else{
			printf("\n\nEmpatou");
		}



	getch();
	return 0;
}
