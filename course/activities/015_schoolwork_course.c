/*
    Escreva um programa que leia uma sequência de 10 números inteiros 
    e os armazene em um vetor. Após a leitura de  todos o números, o 
    programa deve percorrer o vetor e determinar a quantidade de números 
    que são estritamente (maiores que 0). O resultado final deve ser a 
    exibição dessa contagem.
*/

#include <stdio.h>

int main(){
    //criando o vetor:
    int vetor[10];

    //salvando as informações no vetor
    for(int i = 0; i <= 9; i++){
        vetor[i] = i+1;
    }

    //mostrando as informações do vetor
    for(int i = 0; i <= 9; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}