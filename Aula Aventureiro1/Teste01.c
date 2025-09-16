#include <stdio.h>

int main() {

    int numero;

    // Solicitar ao usuário um número
    printf("Digite um número: ");
    scanf ("%d", &numero);

    // Verificar se é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;


}