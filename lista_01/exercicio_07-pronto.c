#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 7 da lista

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	int v,i,j;
	float sn=0,mn;
	register int t;

	struct aluno{
		char nome[30];
		float nota;
	} alunoinfo[50],aux;

	for(t=0;t<50;t++){
		printf("Digite o nome: ");
		scanf(" %s",&alunoinfo[t].nome);
		printf("Digite a nota: ");
		scanf("%f",&alunoinfo[t].nota);
	}

	for(i=0;i<50;i++){
		for(j=0;j<50;j++){
			if(alunoinfo[i].nota>alunoinfo[j].nota){
				aux = alunoinfo[i];
				alunoinfo[i] = alunoinfo[j];
				alunoinfo[j] = aux;
			}
		}
	}

	for(v=0;v<50;++v){
		sn = sn+alunoinfo[v].nota;
	}
	mn = sn/50;
	printf("As cinco maiores notas acima da média são: ");
	for(v=0;v<5;++v){
		if(alunoinfo[v].nota>mn){
		printf("\nNome: %s",alunoinfo[v].nome);
		printf("\nNota: %.2f",alunoinfo[v].nota);
		printf("\n\n");
	}
	}
	getch();
	return 0;
}
