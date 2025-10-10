/*
    A dona de uma pequena loja, Sra. Helena, anota o valot total de vendas de cada dia em um
    caderno. Ao dinal da semana, ela gasta um tempo considerável calculando o desempenho do 
    seu negócio. Para ajudá-la a modernizar seu controle, você deve criar um programa que gere
    um relatório semanal automático. 
    O programa deve ler o valor das vendas dos 7 dias da semana e, em seguida, calcular e exibir
    as seguintes informações:

    O valor total de venda na semana.
    A média de vendas diárias.
    A maior venda feita na semana.   
*/

#include <stdio.h>

int main(){
    float Vendas[7], vlrTotal, mlrVenda;

    //perguntando a Sra Helena o valor das vendas do trampo dela
    for(int i = 0; i <= 6; i++){
        scanf("%f", &Vendas[i]);

        //atualizando a variável para o maior número do vetor até então
        if(i == 0 || Vendas[i] > mlrVenda){
            mlrVenda = Vendas[i];
        }
    }

    // Calculando o valor total
    for(int i = 0; i <= 6; i++){
        vlrTotal = Vendas[i] + vlrTotal;
    }

    //exibindo as informações:
    printf("--- Relatório de vendas da semana ---\n");

    printf("Venda Total:  %.2f\n", vlrTotal);
    printf("Média Diária: %.2f\n", vlrTotal / 7);
    printf("Melhor Venda: %.2f\n", mlrVenda);

    //fechadão com a Sra. Helena 🤝
    return 0;
}