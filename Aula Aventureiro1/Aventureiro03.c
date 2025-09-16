#include <stdio.h>

int main(){
    /*
    Incremento(++)
    Pré-Incremento ++a
    Pós incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--    
    */

    int numero1 = 1, resultado;


    printf(" Antes incremento: %d\n", numero1);
    //numero1 += 1;
    //Pós-incremento:;
    //resultado = numero1;
    //numero1++;
    resultado = numero1++;
    //printf("Após incremento: %d\n", numero1);
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado)";
    
    resultado = ++numero1;
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado)";

    printf(" Antes decremento: %d\n", numero1);
    //numero1 -= 1;
    numero1--;
    printf("Após decremento: %d\n", numero1);


    return 0;


}