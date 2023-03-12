#include <stdio.h>

/*6. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

int main(void) {
    int nota, soma = 0, i;
    printf("Digite 4 notas: \n\n");

    for (i = 0; i < 4; i++) {
        printf("\nDigite a nota %i: ", i + 1);
            scanf("%i", &nota);

            soma += nota;
    }
    //para suportar casas decimais transformei o "i" em float, o i possui como valor o numero 4
    //Caso o loop acima seja modificado para rodas 5 ou mais vezes o print não precisara ser modificado

    printf("\nA media das 4 notas: %.2f\n", soma/ (float) i);
}
