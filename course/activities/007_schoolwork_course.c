/*
    Faça um programa que leia trẽs inteiros e exiba quantos são maiores 
    que a média deles

    testes feitos:

    0 variávels maior que a média 
    1 1 1

    1 variável maior que a média
    1 2 3

    2 variáveis maiores que a média
    1 4 3
*/

#include <stdio.h>

//função que calcula a média aritmética
int mdAf(int num1, int num2, int num3){
    return (num1 + num2 + num3)/3;
}

int main(){
    //declarando as variáveis 
    int num1, num2, num3, mdA;
    int resultado = 0;

    //lendo a entrada do usuários e salvando os números em suas respectivas variáveis
    scanf("%d %d %d", &num1, &num2, &num3);

    //chamando a variável para calcular a média
    mdA = mdAf(num1, num2, num3);

    //adiciona 1 a cada variável que for maior que a média
    if(mdA < num1){
       resultado++; 
    }
    if(mdA < num2){
       resultado++; 
    }
    if(mdA < num3){
       resultado++; 
    }

    //mostra o valor da média e o resultado
    printf("%d\n", mdA);
    printf("%d\n", resultado);
    return 0;
}