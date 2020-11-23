/* Escreva um programa em C onde, se possa representar os nomes e as notas de alunos de um curso da
universidade. O programa deverá imprimir os nomes dos cinco alunos que obtiverem as maiores notas
acima da média da turma. Considerar que a turma tenha 50 alunos. Usar a estrutura multivalorada vista em
sala de aula. */

#include <stdio.h>

double vet_notas (int notas);

int main()
{
    char nomes;
    float notas;

    vet_notas(notas);

    printf("%d", notas);
    
    return 0;
}

float vet_notas (int notas)
{
    float notas[2], aux;
    printf("Digite a nota: ");
    scanf("%f", &aux);
    aux = notas[0];

    printf("Digite a nota: ");
    scanf("%f", &aux);
    aux = notas[1];
    
    return (notas);
}

