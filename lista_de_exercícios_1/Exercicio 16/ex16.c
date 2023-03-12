#include <stdio.h>

/*16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
 O primeiro ganhador receberá 46%;
 O segundo receberá 32%;
 O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

int main (void) {
    float importancia = 780000, ganhador1, ganhador2, ganhador3;
    ganhador1 = 780000 * 0.46;
    ganhador2 = 780000 * 0.32;
    ganhador3 = 780000 * 0.22;

    printf("O ganhador 1 recebe: %.2f\nO ganhador 2 recebe: %.2f\nO ganhador 3 recebe: %.2f\n", ganhador1, ganhador2, ganhador3);
}
