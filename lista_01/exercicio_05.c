#include <stdio.h>

int main ()
{
    float valor;
    int tot_moeda, moeda, aux, valor_int;
    moeda = 100;

    printf("Digite o valor desejado: ");
    scanf("%f", &valor);
    valor = valor * 100;
    valor_int = int(valor);
    
    
    while (valor_int != 0)
    {	
    	
    	if (moeda <= valor_int)
		{
			tot_moeda = valor_int / moeda;
			printf("%d moedas de %d cents \n", tot_moeda, moeda );
			valor_int = valor_int % moeda;
			
		} 
    	else
    	{
    		
    		if (moeda == 100){
    			moeda = 50;
			}else if (moeda == 50)
			{
				moeda = 25;
			}else if (moeda == 25)
			{
				moeda = 10;
			}else if (moeda == 10)
			{
				moeda = 5;
			}else if (moeda == 5)
			{
				moeda = 1;
			}
		}
	}
	return 0;
}