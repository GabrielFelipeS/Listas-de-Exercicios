#include <stdio.h>
#include <math.h>


/*12. Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎= √𝑎2+𝑏2.
Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o valor da hipotenusa através da equação.
Imprima no final o resultado dessa operação.*/

int main (void) {
    float a, b, hipotenusa;

    printf("Digite o valo de a: ");
        scanf("%f", &a);


    printf("Digite o valo de b: ");
        scanf("%f", &b);
        //Uso de uma variavel para salvar a soma do quadrado dos numeros digitados
        //Visualmente mais legivel do que colocar ambos como parametro do sqrt
        float soma_numeros_quadrado = pow(a,2) + pow(b,2);
        hipotenusa = sqrt(soma_numeros_quadrado);

        printf("\nO valor da hipotenusa: %f\n", hipotenusa);
}
