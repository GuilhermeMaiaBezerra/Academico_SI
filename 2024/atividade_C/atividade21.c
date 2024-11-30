#include <stdio.h>

int idade,media_masc,media_fem,media_geral;
char sexo;

int main()
{

    int qtd_masc = 0;
    int qtd_fem = 0;

    for(int i=1; i<=7; i++)
    {
        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
        printf("\n[M] - Masculino [F] - Feminino\n");
        printf("\nInforme seu Sexo: ");
        scanf("%s", &sexo);

        media_geral = media_geral + idade;

        switch(toupper(sexo))
        {
        case 'M':
            qtd_masc++;
            media_masc = media_masc + idade;
            break;
        case 'F':
            qtd_fem++;
            media_fem = media_fem + idade;
            break;
        default:
            printf("Sexo inexistente\n");
        }
    }

    media_geral = media_geral/7;
    media_masc = media_masc/qtd_masc;
    media_fem = media_fem/qtd_fem;

    printf("A idade média do grupo é : %d%\n",media_geral);
    printf("A idade média Masculina é : %d%\n",media_masc);
    printf("A idade média Feminina é : %d%\n",media_fem);

    return 0;
}