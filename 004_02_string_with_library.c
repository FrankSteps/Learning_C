#include <stdio.h>
#include <string.h>

int main() {
    char name[32] = {}; 

    printf("Enter your name: ");

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Your name is: %s\n", name);
    return 0;
}