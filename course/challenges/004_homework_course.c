/*
    Desafio:
        Crie um jogo de adivinhação em que o usuário irá escolher um valor entre 0 e 1000
    por sí mesmo e o programa irá tentar "adivinhar" esse valor. 

        Toda vez que o programa retornar um valor, o usuário responderá com:
    "<" quando for menor,  ">" quando for maior ou com "=" quando o programa acertar.

        O programa irá finalizar com a mensagem 'seu número é 'Tanto".
*/
#include <stdio.h>

//do usuário
char value = '>';
int num;

int fun(){
    printf("deu certo!");
    return 0;
}

int main(){
    scanf("%c", &value);
    if(value == '>' || value == '<' || value == '='){
        fun();
    }else{
        printf("Inválido - Programa encerrado");
        return 0;
    }

    return 0;
}