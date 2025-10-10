/*
    Uso do break e do continue em laços do tip for
*/

#include <stdio.h>

int main(){
    for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
        if(i == 5){
            break; //<-- qubra o programa assim que i é igual a 5
        }
    }
    printf("Programa interrompido por 'break'\n");

    //--------------------------
    printf("-------------------------\n");

    for(int i = 0; i <= 10; i++){
        if(i%2 != 0){
            continue;
        }
        printf("%d\n", i);
    }
    printf("Programa deu 'pulos' por conta do 'continue'\n");
    return 0;
}