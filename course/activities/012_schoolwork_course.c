/*
    faça:

    1
    22
    333
    4444
    55555

    ...
*/

#include <stdio.h>

int main(){
    int num = 999; 

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}