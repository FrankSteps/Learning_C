/*
    Acessando um elemento que está fora do intervalo daquele vetor:

    O vetor lido ou escrito nessa posição será imprevisível(pode ser
    lixo de memória, zero ou até sobrescrever arquivos importantes)
*/

#include <stdio.h>

int main(){
    int my_vector[5];

    printf("%d\n", my_vector[6]);
    printf("%d\n", my_vector[-1]);
    return 0;
}