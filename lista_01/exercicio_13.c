#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 13 da lista


int aux,i,j,k,v1[10],v2[10],v3[10];

int ordenar(int v[]){


	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){

			if(v[i]<v[j]){
				aux = v[i];
				v[i]=v[j];
				v[j]=aux;
			}

		}
	}
}

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");



	for(k=0;k<=9;k++){
		printf("Digite o valor %d para o vetor 1: ",k);
		scanf("%d",&v1[k]);
	}
	printf("\n");
	for(k=0;k<=9;k++){
		printf("Digite o valor %d para o vetor 2: ",k);
		scanf("%d",&v2[k]);
	}
	printf("\n");
	for(k=0;k<=9;k++){
		printf("Digite o valor %d para o vetor 3: ",k);
		scanf("%d",&v3[k]);
	}

	ordenar(v1);
	ordenar(v2);
	ordenar(v3);

	printf("\n\nVetor 1 ordenado\n");
	for(k=0;k<=9;k++){
		printf("%d ",v1[k]);
	}
	printf("\n\nVetor 2 ordenado\n");
	for(k=0;k<=9;k++){
		printf("%d ",v2[k]);
	}
	printf("\n\nVetor 3 ordenado\n");
	for(k=0;k<=9;k++){
		printf("%d ",v3[k]);
	}


	getch();
	return 0;
}
