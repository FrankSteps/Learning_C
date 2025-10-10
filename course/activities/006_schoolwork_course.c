/*
    Faça dois números inteiros que lẽ dois números inteiros e determina
    qual dois dois é o maior
*/

#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    if(num1 > num2){
        printf("%d", num1);
    }else if(num1 < num2){
        printf("%d", num2);
    }else{
        printf("iguais\n");
        return 0;
    }
    printf(" é maior\n");
    return 0;
}