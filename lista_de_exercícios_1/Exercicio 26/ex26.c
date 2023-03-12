#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*26. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/

void string_para_numero_inteiro(int *numero);
void tranformar_duracao_experiencia_arrumarHorario(int *duracao_experiencia, int *segundos , int *minutos, int *horas);


int main (void) {
    unsigned int horas, minutos, segundos, duracao_experiencia ;

    do{
        fflush(stdin);
        printf("Horario da experiencia:\n");

        printf("\nDiga a hora: ");
            string_para_numero_inteiro(&horas); //funçao para impedir que o usuario digite uma letra

        printf("\nDiga os minutos: ");
            string_para_numero_inteiro(&minutos);


        printf("\nDiga os segundos: ");
            string_para_numero_inteiro(&segundos);

        if (horas > 23 || minutos > 59 || segundos > 59)
            printf("\nDigite um horario valido\n\n");

    } while(horas > 23 || minutos > 59 || segundos > 59);


    printf("\nDigite a duracao da experiencia em segundos: ");
        string_para_numero_inteiro(&duracao_experiencia);

    //Usado para transformar e alterar o horario
    tranformar_duracao_experiencia_arrumarHorario(&duracao_experiencia, &segundos , &minutos, &horas);

    printf("\nO horario de fim da experiencia:%i:%i:%i\n", horas, minutos, segundos);
}

void string_para_numero_inteiro(int *numero) {
    char string[11]; /*Tamanho 11 pq uma variavel inteirs aguenta apenas 10 digitos de -2147483648 a 2147483647, o 11º é pro \0

    Tamanho do string, usei para o sistema nao precisar calcular toda vez que chegasse em
     for (int i = 0; i < strlen(string); i++)*/
    int tamanho = strlen(string);
    bool pular;

    do {
        pular = false;

        fflush(stdin); //Limpa o buffer do teclado, evitar erros

        fgets(string, 11, stdin); //Lê o que o usuario digitou
        *numero = atoi(string); //transforma o que o usuario digitou em inteiro e coloca em


        for (int i = 0; i < tamanho; i++) {
            if(isalpha(string[i])) {
                printf("\nDigite um valor valido!!\n");
                pular = true;
                break;
            }
        }

    } while(pular);




}

void tranformar_duracao_experiencia_arrumarHorario(int *duracao_experiencia, int *segundos , int *minutos, int *horas) {
        while(true){
        if (duracao_experiencia >= 3600){
            horas++;
            duracao_experiencia -= 3600;

        } else if (horas >= 24){
            horas -= 24;

        } else if(duracao_experiencia >= 60) {
            minutos++;
            duracao_experiencia -= 60;

        } else if (minutos >= 60) {
            minutos -= 60;
            horas++;

        }else {
           *segundos += duracao_experiencia;

           if (segundos >= 60){
                minutos++;
                segundos -= 60;
            }else break;

        }
      }

}

