#include <stdio.h>

/*22. Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela
ASCII.*/

int main (void) {
    char letra;

    printf("Letra: ");
        scanf("%c", &letra);

        if(letra >= 'A' && letra <= 'Z') {
            printf("Letra foi trasnformada em: %c", letra + 32);
        } else if(letra >= 'a' && letra <= 'z') {
             printf("Letra foi trasnformada em: %c", letra - 32);
        }

}
