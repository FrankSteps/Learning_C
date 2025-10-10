/*
    Crie um vetor que de tamanho 5 sem inicializá-lo e exiba os valores 
    armazenados nas posições de 0 a 5
*/

#include <stdio.h>

int main(){
    //vetor de com 6 espaços para int
    int vetor[6] = {0, 1, 2, 3, 4, 5}; 

    //mostrando as informações gravadas no vetor
    for(int i = 0; i <= 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}