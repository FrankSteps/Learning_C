/*
    Usando o laço de repetição "do while":

    Como funciona:

        O bloco dentro do "do { ... }" é executado uma vez.
        Depois, a condição do while é avaliada:
        Se for verdadeira (true) → o bloco é repetido.
        Se for falsa (false) → o laço termina.
*/

#include <stdio.h>

int main(){
    int opcao; 

    do {
        printf("Digite '0' para sair: ");
        scanf("%d", &opcao);
    } while(opcao != 0);

    printf("programa finalizado\n");
    return 0;
}