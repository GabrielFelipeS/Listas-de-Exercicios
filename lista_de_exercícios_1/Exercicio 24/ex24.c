#include <stdio.h>
#include <string.h>

/*24. Leia um n�mero inteiro de 4 d�gitos e imprima 1 d�gito por linha.*/

int main (void) {
    char NumeroLido[4];

    printf("igite um numero inteiro de 4 digitos: ");
        fgets(NumeroLido, 5, stdin);

    for (int i = 0;i < 4; i++) {
        printf("%c\n", NumeroLido[i]);
    }

}
