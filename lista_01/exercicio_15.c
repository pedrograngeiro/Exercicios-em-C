#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Questão 15 da lista

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	register int t=0;
	int k,s;
	float qmm=0;
	int qmc=0;
	int mis=0;
	int ver=0;
	float porc;

	k=0;
	s=1;

	struct acidente{
		int ano;
		char sexo[1];
		int proc;
	} acidenteinfo[1000];



	while(s==1){
		k=k+1;
		printf("\nDigite o ano de nascimento: ");
		scanf("%d",&acidenteinfo[t].ano);

		if(acidenteinfo[t].ano>1999){
			qmm=qmm+1;
		}

		setbuf(stdin, NULL);

		printf("Digite o sexo (M ou F): ");
		gets(acidenteinfo[t].sexo);


		printf("Digite a procedência (0 - Capital, 1 - Interior, 2 - Outro estado): ");
		scanf("%d",&acidenteinfo[t].proc);

		if(strcmp(acidenteinfo[t].sexo,"F")==0 && acidenteinfo[t].proc==0){
			qmc = qmc+1;
		}

		if(acidenteinfo[t].proc==1 && acidenteinfo[t].ano<1960){
			mis = mis+1;
		}

		if(strcmp(acidenteinfo[t].sexo,"F")==0 && acidenteinfo[t].ano<1960){
			ver=1;
		}

		printf("Deseja continuar (1 - sim, 2 - não): ");
		scanf("%d",&s);
	}

	porc = (qmm/k)*100;

	printf("\n\nA porcentagem de pessoas com menos do que 21 é: %.2f",porc);
	printf("\nA quantidade de mulheres da capital é: %d",qmc);
	printf("\nA quantidade de motoristas do interior com mais de 60 anos é: %d",mis);

	if(ver==1){
	printf("\nExiste alguma mulher com mais de 60 anos? Sim");
}
else{
	printf("\nExiste alguma mulher com mais de 60 anos? Não");
}

	getch();
	return 0;
}
