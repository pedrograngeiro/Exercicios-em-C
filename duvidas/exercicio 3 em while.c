#include <stdio.h>
int main ()
{
	int n, cont, soma;
	printf("Digite um numero para verificar se ele eh perfeito: ");
	scanf("%d", &n);
	
	cont = 1;
	soma = 0;
	
	while(cont<n)
	{
		if (n%cont == 0)
		{
			soma = soma + cont;
			cont = cont + 1;
		}
		else
		{
			cont = cont + 1;
		}
	}
	
	if (soma == n)
	{
		printf("O numero %d eh perfeito", n);
	}
	else
	{
		printf("O numero %d nao eh perfeito", n);
	}
}