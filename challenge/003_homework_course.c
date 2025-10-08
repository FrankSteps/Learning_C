/*
    Crie um procedimento que leia uma hora formatada da seguinte forma:
    XhYmin, sendo x e y dois números inteiros positivos; e exiba o 
    equivalente em segundos.
*/

#include <stdio.h>

int X, Y, total;

int main(){
    scanf("%dh%dmin", &X, &Y);
    total = (X*3600) + (Y*60);
    printf("%d\n", total);
    return 0;
}