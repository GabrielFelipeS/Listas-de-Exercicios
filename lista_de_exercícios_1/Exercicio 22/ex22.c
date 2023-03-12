#include <stdio.h>

/*22. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
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
