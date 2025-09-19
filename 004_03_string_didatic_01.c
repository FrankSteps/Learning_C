#include <stdio.h>
#include <string.h>

int main(){
    char name[32] = {0}; 

    printf("Enter your name: ");

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Your name is: %s\n", name);

    //----------------------------------------------------

    printf("\n...\n");
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n')
            printf("name[%2d] = '\\n'\n", i);
        else
            printf("name[%2d] = '%c'\n", i, name[i]);
    }
    printf("name[ %zu] = '\\0'\n", strlen(name));
    
    //-----------------------------------------------------

    return 0;
}