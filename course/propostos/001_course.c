/*
    Desenvolvido por: Lucas Calombi
    Apresentado por:  
*/

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int media = (a + b + c)/3;
    int qnt = (a > media) + (b > media) + (c > media);
    printf("%d numeros sao maiores que a media\n", qnt);
    return 0;
}