#include <stdio.h>
#include <math.h>

/*
29. Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0, 0).
*/


int main (void) {
 float x, y, distancia;

    printf("Digite as coordenadas de X: ");
        scanf("%f", &x);

    printf("Digite as coordenadas de Y: ");
        scanf("%f", &y);

    distancia = sqrt(pow(x, 2) + pow(y, 2));

    printf("A distancia e: %f\n", distancia);


    return 0;
}
