#include <stdio.h>

int x, y;
char symbol[];

int main(){
    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    printf("operation (+, -, *, /): ");
    scanf("%c", &symbol);

    if(symbol == '+'){
        printf(x + y);
    }else if(symbol == '-'){
        printf(x - y);
    }else if(symbol == '*'){
        printf(x * y);
    }else if(symbol == '/'){
        if(y == 0){
            printf("error: infinity");
        }else{
            printf(x / y);
        }
    }else{
        printf("error: undefined");
    }

    return 0;
}