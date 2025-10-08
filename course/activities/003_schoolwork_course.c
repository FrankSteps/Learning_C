/*
    Probleminha de recursão em C
*/

#include <stdio.h>

int fibn(int n){
    if(n == 0){
        return 0;
    }if(n == 1){
        return 1;
    }
    return fibn(n-1) + fibn(n-2);
}

int main(){
    int retorno = fibn(15);
    printf("%d\n", retorno);
    return 0;
}