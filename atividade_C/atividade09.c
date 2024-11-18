#include <stdio.h>


int codigo,votos_candidato1,votos_candidato2,votos_branco,votos_nulo;

void Votos(void);

int main()
{

int tipo = 0;
printf("==========2º TURNO ELEIÇÕES 2024=========\n");

    while(tipo == 0)
    {
        printf("\nCandidatos a Prefeitura de Manaus/AM\n");
        printf("[0]  - Branco\n");
        printf("[1]  - Nulo\n");
        printf("[22] - Alberto Neto\n");
        printf("[70] - David Almeida\n\n");
        printf("Digite o código para votar: ");
        scanf("%d", &codigo);

        Votos();

        printf("\============================\n");

        printf("Deseja continuar ?\n[0] - Sim\n[1] - Não\nResposta: ");
        scanf("%d", &tipo);
    }

    printf("Total de Votos para cada Candidato\n");
    printf("Total de votos Alberto Neto: %d\n",votos_candidato1);
    printf("Total de votos David Almeida: %d\n",votos_candidato2);
    printf("Total de Votos nulos: %d\n",votos_nulo);
    printf("Total de Votos em Branco: %d\n",votos_branco);
return 0;
}

void Votos()
{
    switch (codigo)
        {
         case 0:
             votos_branco++;
             printf("\nVoto registrado com sucesso\n");
             break;
         case 1:
             votos_nulo++;
             printf("\nVoto registrado com sucesso\n");
             break;
         case 22:
             votos_candidato1++;
            printf("\nVoto registrado com sucesso\n");
             break;
         case 70:
             votos_candidato2++;
             printf("\nVoto registrado com sucesso\n");
             break;
         default:
             printf("Voto Inválido");
        }
}