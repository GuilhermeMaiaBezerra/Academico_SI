#include <stdio.h>

int num,tipo;
int main()
{
    printf("Informe um número inteiro: \n");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        tipo = i % 2;
        if(tipo == 0)
        {
            printf("%d Par\n",i);
        }
        else
        {
            printf("%d Ímpar\n",i);
        }
    }
return 0;
}