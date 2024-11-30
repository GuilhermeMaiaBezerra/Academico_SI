#include <stdio.h>

int idade,menor_idade,maior_idade,qtd_mulheres;
float salario;
char sexo;  

void VerificarIdades(int idade_temp);
void VerificarSalarioFem(void);

int main()
{
    float media_salario = 0.0;
    
    menor_idade = 0;
    maior_idade = 0;
    
    for(int i=1; i<=4; i++)
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("\nInforme seu sexo [M] ou [F]: ");
        scanf("%s", &sexo);
        printf("\nInforme seu salario: ");
        scanf("%f", &salario);

        printf("\n================\n");
        media_salario = media_salario + salario;

        VerificarIdades(idade);
        VerificarSalarioFem();
    }

    media_salario = media_salario/4;
    printf("Média de salário do grupo: R$ %.2f\n", media_salario);
    printf("Maior idade: %d Menor idade: %d \n",maior_idade,menor_idade);
    printf("Mulheres com salário até R$1.500,00: %d",qtd_mulheres);

    return 0;
}

void VerificarSalarioFem()
{
    switch(toupper(sexo))
    {
        case 'F':
            if(salario <= 1500.00)
            {
              qtd_mulheres++;
            }

            break;
    }
}

void VerificarIdades(int idade_temp)
{

    if(menor_idade > idade_temp || menor_idade == 0)
    {
            menor_idade = idade_temp;
    }
    else if(maior_idade < idade_temp || maior_idade == 0)
    {
            maior_idade = idade_temp;
    }
}