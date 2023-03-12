#include <stdio.h>

/*9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.*/

int main(void) {
    int num;

    printf("Digite um numero: ");
        scanf("%i", &num);

    printf("O numero %i tem como sucessor do seu triplo %i e antecessor do seu dobro %i", num, (num * 3) + 1, (num * 2) - 1);

}
