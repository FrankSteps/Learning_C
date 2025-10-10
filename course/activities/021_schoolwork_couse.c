/*
    Aprofundamento de strings em C
    Usando a biblioteca string
*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "Frank";
    char last[] = "Steps"; 

    printf("%s\n", strcat(name, last));
    return 0;
}