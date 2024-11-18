#include <stdio.h>

int idade;
int faixa1,faixa2,faixa3,faixa4,faixa5; //Faixa étarias
float media_f1_f5; //media da Faixa1 e Faixa5

void faixa_etaria(void);

int main()
{
    for(int i=1; i<= 15; i++)
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);

        faixa_etaria();
    }

    printf("Quantidade de pessoas por faixa etária\n");

    printf("1º Faixa Etária: %d\n",faixa1);
    printf("2º Faixa Etária: %d\n",faixa2);
    printf("3º Faixa Etária: %d\n",faixa3);
    printf("4º Faixa Etária: %d\n",faixa4);
    printf("5º Faixa Etária: %d\n",faixa5);

    media_f1_f5 = ((faixa1 + faixa5) /15.0) * 100.0;

    printf("Porcentagem de pessoas na 1º e 5º Faixa Etária: %.2f%% \n", media_f1_f5);
 
    return 0;
}

void faixa_etaria()
{
    if(idade <=15)
     {
          faixa1++;
     }
    else if(idade >=16 && idade <=30)
    {
        faixa2++;
    }
    else if(idade >=31 && idade <=45)
    {
        faixa3++;
    }
    else if(idade >=46 && idade <=60)
    {
        faixa4++;
    }
    else
    {
        faixa5++;
    }
}