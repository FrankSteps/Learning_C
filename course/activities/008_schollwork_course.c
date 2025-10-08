/*
    Determinar o dia da semana de acordo com o seu número
*/
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    switch(num){
        case 1:  printf("Domingo\n");        break;
        case 2:  printf("Segunda-feira\n");  break;
        case 3:  printf("Terça-feira\n");    break;
        case 4:  printf("Quarta-feira\n");   break;
        case 5:  printf("Quinta-feira\n");   break;
        case 6:  printf("Sexta-feira\n");    break;
        case 7:  printf("Sábado\n");         break;

        default: 
            printf("error\n"); 
            return -1;
            break;
    }
    return 0;
}