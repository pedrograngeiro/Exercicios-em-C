#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Questão 9 da lista

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	char p[80];
	int k,j,cont=1,t,i;

	printf("Digite uma palavra: ");
	scanf("%s",&p);
	t = strlen(p);
	for(k=0;k<t;k++){
		for(j=k+1;j<t;j++){
			if(p[k]==p[j]){
				cont=cont+1;
				for(i=j;i<=t;i++){
					p[i]=p[i+1];
				}
				t = t-1;
			}
		}

		printf("\nA letra %c aparece %d vezes",p[k],cont);
		cont = 1;
	}

	getch();
	return 0;
}
