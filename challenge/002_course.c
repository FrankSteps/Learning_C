#include <stdio.h>

int main(){
    char name[20];
    int year;
    float height; 

    scanf("Meu nome eh %s eu tenho %d anos e %fm de altura", name, &year, &height);
    printf("%s\n%d\n%.2f\n", name, year, height);
    return 0;     
}