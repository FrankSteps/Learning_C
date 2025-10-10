/*
    Escreva um programa que defina uma senha numérica como, por exemplo, 
    a senha 1234. 
    O programa deve pedir a senha ao usuário. Quando ele acertar, exiba:
    "Acesso permitido".
*/

#include <stdio.h>

int main(){
    int senha = 1234; 
    int senha_user_in;

    do{
        printf("mande a senha: ");
        scanf("%d", &senha_user_in);
    }while(senha != senha_user_in);
    printf("Acesso permitido\n");

    return 0;
}