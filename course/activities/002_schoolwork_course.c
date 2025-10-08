/*
    Crie uma função que retorna o valor da soma de duas variáveis e imprima
    ela na tela.
*/

#include <stdio.h>

int my_function(int a, int b){
    return a+b;
}

int main(){
    int retorno = my_function(2, 3);
    printf("%d\n", retorno);
    return 0;
}