/*

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool memory[8] = {0}; 

    for(int i = 0; i <= 7; i++){
        printf("%d\n", memory[i]);
    }
    return 0;
}