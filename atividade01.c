#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado_civil;

    printf("Informe o estado civil (S - Solteiro, C - Casado, D - Divorciado, V - Viúvo): \n");
    scanf(" %c", &estado_civil); // Nota o espaço antes de %c

    switch (toupper(estado_civil)) {
        case 'S':
            printf("Solteiro\n");
            break;
        case 'C':
            printf("Casado\n");
            break;
        case 'D':
            printf("Divorciado\n");
            break;
        case 'V':
            printf("Viúvo\n");
            break;
        default:
            printf("Estado civil inválido\n");
    }

    return 0;
}
