#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

// Quest�o 8 da lista

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	int A[50], aux, k, i,j;



	for(k=0;k<=49;k++){
		printf("Digite um n�mero: ");
		scanf("%d",&A[k]);
	}

	for(k=0;k<=49;k++){
		for(i=0;i<=49;i++){
			if(A[k]>A[i]){
				aux = A[k];
				A[k] = A[i];
				A[i] = aux;
			}
		}
	}


	printf("\nO maior elemento �: %d",A[0]);
	printf("\nO segundo maior elemento �: %d",A[1]);

	getch();
	return 0;
}
