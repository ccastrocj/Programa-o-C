#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    int media;

    printf("*** PROGRAMA DE CÁLCULO DE MÉDIA *** \n");

    printf("Digite sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %d \n", media);



    return 0;
}