#include <stdio.h>

/*21. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo
a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo,
sem se preocupar com a altura do usu�rio.*/

int main (void) {
    float altura_degrau, altura_alcancar;

    printf("Digite a altura do degrau: ");
        scanf("%f", &altura_degrau);

    printf("Digite a altura que quer alcanar: ");
        scanf("%f", &altura_alcancar);

    int contador = 1;

    for (; altura_degrau < altura_alcancar; altura_degrau += altura_degrau ) {
        contador++;
    }

    printf("Precisa subir %i para alcan�ar a altura desejada", contador);

}
