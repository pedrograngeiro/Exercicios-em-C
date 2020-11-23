#include <stdio.h>
#include <stdlib.h>

int get_1st_diaDaSemana(int ano){

    int d;
    d = (((ano - 1) * 365) + ((ano - 1) / 4) - ((ano - 1) / 100) + ((ano) / 400) + 1) % 7;
    return d;
}
int main()
{
    system("Color 3F");

    int ano, mes, dia, diasEmMes, diaDaSemana=0, diaDeInicio;


    printf("\n Digite o ano desejado: ");
    scanf("%i", &ano);

    char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maior", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int diaDoMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if((ano%4 == 0 && ano%100!= 0) || ano%400==0){
        diaDoMes[1]=29;
    }


    diaDeInicio = get_1st_diaDaSemana(ano);
    for(mes=0; mes<12;mes++){

        diasEmMes = diaDoMes[mes];

        printf("\n\n-----------------%s----------------\n", meses[mes]);
        printf("\n  Dom  Seg  Ter  Qua  Qui  Sex  Sab\n");

        for(diaDaSemana=0; diaDaSemana<diaDeInicio;diaDaSemana++){
            printf("     ");
        }

        for(dia=1;dia<=diasEmMes;dia++){
            printf("%5d", dia);

            if(++diaDaSemana > 6){
                printf("\n");
                diaDaSemana=0;
            }
            diaDeInicio=diaDaSemana;
        }
    }
}
