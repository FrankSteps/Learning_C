/*
    Usando vetores em C
*/

#include <stdio.h>

int main(){
    //vetor de com 6 espaços para int
    int vetor[6]; 
    
    //salvando informação no vetor usando for
    for(int i = 0; i <= 5; i++){
        vetor[i] = i;
    }

    //mostrando as informações gravadas no vetor
    for(int i = 0; i <= 5; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}