#include <stdio.h>

/*
28. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.
*/


int main (void) {
 float nota[3];
 char matricula[20];


    printf("Digite a matricula do aluno: ");
        fgets(matricula, 19, stdin);

     for (int i = 0; i < 3; i++) {
         printf("Digite a %iº nota: ", i + 1);
            scanf("%f", &nota[i]);
     }

    system("cls");
    float media = (nota[0] * 1 + nota[1] * 1 + nota[2] * 2 )/4.0;
    char *status = (media >= 60)? "Aprovado": "Reprovado";

    printf("A matricula do aluno: %s\nA media foi de: %.2f\nO status dele: %s", matricula, media, status);

    return 0;
}

