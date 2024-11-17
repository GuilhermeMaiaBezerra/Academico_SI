#include <stdio.h>

char nome[30];
float valor_pago, faturamento,total;

int main() {

    faturamento = 0;
    for(int i=1; i<=5 ; i++)
    {
        printf("Informe o nome do %d° Cliente: ",i);
        scanf("%s", &nome);
        printf("\nInforme o Valor gasto pelo %d° Cliente: \n",i);
        scanf("%f", &valor_pago);

        faturamento = faturamento + valor_pago;
    }

    if(faturamento > 54000)
    {
        total = faturamento - 54000;
        printf("Superamos em %.2fR$ faturamento da Loja B\n", total);
    }

    printf("Faturamento Total: %.2fR$",faturamento);

    return 0;
}