/*
    Crie uma função recursiva que recebe um inteiro positivo N
    e retorne o valor da soma com cada elemento sendo elevado a 2

    1² + 2² + 3² + ... + N²
*/

#include <stdio.h>

int myFunction(int n){
    if(n == 0){
        return 0; 
    }
    return n*n + myFunction(n-1);
}

int main(){
    int retorno = myFunction(9);
    printf("%d\n", retorno);
    return 0;
}