#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

void random_number(int *array_randomico[],int *random, int qtd_lista, int ordem);

int main(void) {
    int qtd_lista;



    printf("Digite a quantidade de tarefas da lista: ");
        scanf("%i", &qtd_lista);

    char lista[qtd_lista][20];

    for (int i = 0; i < qtd_lista; i++) {
        fflush(stdin);

        printf("%i da lista: ", i + 1);
            fgets(lista[i], 19, stdin);
    }

    int array_numeros_randomicos[qtd_lista];

    for (int i = 0; i < qtd_lista; i++) {
        int random;
        random_number(&array_numeros_randomicos, &random, qtd_lista, i);

        printf("\nA tarefa a ser executada: %s\n", lista[random]);
    }

}


void random_number(int *array_randomico[], int *random, int qtd_lista, int ordem) {

*random = rand() % qtd_lista;


}
