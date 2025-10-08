/*
    Crie um programa que retorna se um determinado número é ou não é múltiplo de 3
    utilizando artíficios condicionais do C para este feito.
*/

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("é múltiplo");
    }else{
        printf("não é múltiplo");
    }

    return 0;
}