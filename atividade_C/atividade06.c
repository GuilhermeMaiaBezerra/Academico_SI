#include <stdio.h>

int idade;
float altura,peso,media_altura,porcentagem_peso;

int main ()
{
    int maior_cinquenta = 0;
    int qtd_adolecentes = 0;

    for(int i=1; i<=25; i++)
    {
        printf("Dados Pessoa %d\n",i);
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("\nInforme sua Altura: ");
        scanf("%f", &altura);
        printf("\nInforme seu Peso: ");
        scanf("%f", &peso);

        if(idade > 50)
        {
            maior_cinquenta++;
        }
        else if(idade >=10 && idade <=20)
        {
            qtd_adolecentes++;
            media_altura = media_altura + altura;
        }

        if(peso <40)
        {
            porcentagem_peso++;
        }

        printf("======================\n");
    }

    porcentagem_peso = (porcentagem_peso/25) * 100;
    media_altura = media_altura/qtd_adolecentes;

    printf("Número de pessoas com idade superior a 50 anos: %d\n",maior_cinquenta);
    printf("Média das Alturas com idade entre 10 e 20 anos: %.2f\n",media_altura);
    printf("Porcentagem com peso inferior a 40 quilos: %.2f%\n",porcentagem_peso);

return 0;
}