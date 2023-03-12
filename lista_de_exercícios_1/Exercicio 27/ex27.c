#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

/*27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.*/

void string_para_inteiro(int *numero);

int main (void) {
    int anoAtual, idade, dia, mes, ano;
    char resposta[3];
    time_t data_ano; // é usado para representar o tempo de calendário.
    time(&data_ano);

    struct tm *data = localtime(&data_ano);
    anoAtual = (data->tm_year + 1900);

    printf("Quantos anos voce tem? ");
    string_para_inteiro(&idade);

    printf("Em que mes voce nasceu? (em numero): ");
    string_para_inteiro(&mes);

    printf("Em que dia você nasceu? ");
    string_para_inteiro(&dia);

    ano = anoAtual - idade;

    /* Caso eu tenha 19 anos e esteja em 2023 o codigo tera como resultado que eu nasci em 2004, o que nao é o caso, pra arrumar isso eu preciso do mes e do dia, caso o mes ainda não tenha chegado  ou
        cas o o mes tenah chegado mas não o dia, o ano vai sofrer -1 em seu total, dando o valor correto
    */


    if (mes > (data->tm_mon) + 1) {
        ano--;
    } else if (mes == (data->tm_mon) + 1 && dia > data->tm_mday) {
        ano--;
    }

    printf("\nVoce nasceu em %i/%i/%i\n", dia, mes, ano);

}


void string_para_inteiro(int *numero) {
    char string[12];
    bool pular;
    do {
        pular = true;

        fgets(string, 11, stdin);
        int tamanho = strlen(string);

        for (int i = 0; i < tamanho; i++)
        {
            if(isalpha(string[i])) {
                printf("\nDigite um numero!!\n\n");
                pular = false;
                break;
            }
        }
    } while(!pular);

    *numero = atoi(string);
}

