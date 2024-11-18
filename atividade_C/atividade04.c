#include <stdio.h>

int idade,maior_idade;
int main()
{

    for(int i= 1; i<=10; i++)
    {
        printf("Informe a idade: \n");
        scanf("%d", &idade);

        if(idade >= 18)
        {
          maior_idade++;
        }
    }
    
    printf("Temos %d usuário(s) maiores de 18 anos\n",maior_idade);

return 0;
}