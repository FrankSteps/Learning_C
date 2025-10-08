/*
    A empresa Poxim Tech está criando o sistema de cobrança para a nova fornecedora 
    de água de São Cristovão. A cobrança é feita de acordo com uma tabela progressiva 
    de acordo com o consumo em kw/h.

    Menos de 100 kw/h é cobrado R$ 0,25 para cada kw/h
    Entre 100 e 200 kw/h é cobrado R$ 0,40 para cada kw/h
    Entre 200 e 300 kw/h é cobrado R$ 0,50 para cada kw/h
    Mais de 300 kw/h é cobrado R$ 0,60 para cada kw/h

    Crie um programa em que o usuário entre com o consumo, em kw/h e retorne o valor 
    que ele deverá pagar.
*/

#include <stdio.h>

int main(){
    float kwh, preco;
    scanf("%f", &kwh);

         if(kwh <  100)  preco = kwh*0.25;
    else if(kwh <  200)  preco = kwh*0.40;
    else if(kwh <= 300)  preco = kwh*0.50;
    else if(kwh >  300)  preco = kwh*0.60;

    printf("O valor cobrado é: R$ %.2f.", preco);
}