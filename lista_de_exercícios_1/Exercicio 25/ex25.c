#include <stdio.h>

/*25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

int main (void) {
    int tempo, segundos = 0, minutos = 0, horas = 0;

    printf("Digite o valor em segundos: ");
        scanf("%i", &tempo);

    while(1){
        if (tempo >= 3600) {
            horas++;
            tempo -= 3600;
            continue;

        } else if(tempo >= 60) {
            minutos++;
            tempo -= 60;
            continue;

        } else {
            segundos = tempo;
            break;
        }
    }

    printf("%i hora(s), %i minuto(s) e %i segundo(s)\n", horas, minutos, segundos);
}
