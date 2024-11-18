#include <stdio.h>

int num,valor;

int main(){
    

    printf("Informe um numero: ");
    scanf("%d" , &num);
    
    for(int i=1; i<=10 ; i++)
    {
      valor = num * i;
      printf("\n %d x %d = %d", num,i,valor);
    }
    
return 0;
}