#include <stdio.h>

int num;

int main()
{
    int contador = 0;

    for(int i = 0; i<=10; i++)
    {
        printf("Informe um Número: ");
        scanf("%d", &num);
        printf("\n");

        if(num >= 30 && num <=90)
        {
            contador++;
        }
    }

    printf("Quantidade de numeros entre 30 e 90: %d",contador);
return 0;
}