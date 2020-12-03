#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 6 da lista

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");

	int ab,k;
	float dp,qg,pp,kpl,sd=0,sg=0,qplt,spp=0,ccqr;

	printf("Digite o número de abastecimentos feitos (incluindo o primeiro e o último): ");
	scanf(" %d",&ab);

	for(k=1;k<=ab;k++){
		printf("\n\nDistância percorrida até a %d parada: ",k);
		scanf(" %f",&dp);
		printf("Quantidade de gasolina comprada antes da parada %d (em litro): ",k);
		scanf(" %f",&qg);
		printf("Preço pago pela gasolina: ");
		scanf(" %f",&pp);
		kpl = dp/qg;
		printf("Km/L na parada %d = %.2f",k,kpl);
		sd = sd+dp;
		sg = sg+qg;
		spp = spp+pp;
	}

	qplt = sd/sg;
	ccqr = spp/sd;


	printf("\n\nKm/L durante toda a viagem é: %.2f",qplt);
	printf("\nO custo do combustível por km rodado é: %.2f",ccqr);

	getch();
	return 0;
}
