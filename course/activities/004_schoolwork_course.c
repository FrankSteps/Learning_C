#include <stdio.h>

int num;

int main(){
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("é par");
    }else{
        printf("é impar");
    }
    return 0;
}