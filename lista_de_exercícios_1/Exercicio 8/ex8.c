#include <stdio.h>

/*8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

int main (void) {
    int num;
    printf("Digite um numero: ");
        scanf("%i", &num);

        printf("\nO numero %i tem como seu antecessor %i e seu sucessor %i\n", num, num - 1, num + 1);
}
