#include <stdio.h>

int age = 0;
float weight = 0;

int main(){
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("your age: %d.\n", age);
    printf("your weight %.1f \n", weight);

    return 0;
}