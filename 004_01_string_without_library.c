#include <stdio.h>

int main(){
    char name[32];

    printf("Enter your name: ");
    scanf("%31s", name); 

    printf("Your name is: %s\n", name);


    return 0;
}