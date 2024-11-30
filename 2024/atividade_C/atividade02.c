#include <stdio.h>

void OrdemValores(void);

int maior,meio,menor;
int a,b,c;

int main()
{

    printf("Informe valores para (A,B,C)\n");
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("\nValor de B: ");
    scanf("%d", &b);
    printf("\nValor de C: ");
    scanf("%d", &c);

    OrdemValores();

    printf("Ordem Crescente (A,B,C)\n");

    printf("%d %d %d\n", menor, meio, maior);

    printf("Ordem Decrescente (A,B,C)\n");

    printf("%d %d %d\n", maior, meio, menor);
    
    return 0;
}

void OrdemValores()
{
    if(a > b && a > c)
    {
        maior = a;

        if(b > c)
        {
            meio = b;
            menor = c;
        }
        else
        {
            meio =c;
            menor = b;
        }

    }
    else if( b > a && b > c)
    {
        maior = b;


        if(a > c)
        {
            meio = a;
            menor = c;
        }
        else
        {
            meio = c;
            menor = a;
        }
    }
    else
    {
        maior = c;

        if(a > b)
        {
            meio = a;
            menor = b;
        }
        else
        {
            meio = b;
            menor = a;
        }
    }
}