#include <stdio.h>
#include <locale.h>
#include <ctype.h>

char estado_civil;

int main(){

	setlocale(LC_ALL,"Portuguese");
		printf("Informe o estado cívil: \n");
		scanf("%c", & estado_civil);

			if(estado_civil != "")
			{
				switch(toupper(estado_civil)){

				case 'S':
					printf("Solteiro");
					break;
				case 'C':
					printf("Casado");
					break;
				case 'D':
					printf("Divorciado");
					break;
				case 'V':
					printf("Viúvo");
					break;
				}
			}
			else
			{
				printf("Estado cívil inválido");
			}

	return 0;

}