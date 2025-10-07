/*
    No período de 2025.2, o prof. Calebe decidiu avaliar os alunos de uma forma
    diferente na disciplina de  Arquitetura de computadores.
    A nova forma de avaliação consistia em uma única unidade com várias etapas,
    tendo ao total 4 trabalhos(t1, t2, t3 ,t4), 1 seminário (s), provas (p1 e p2),
    todas podendo ser avaliadas de 0 a 10. 

    A nota final da disciplina será calculada da seguinte forma:
    NF(nota final) = (NT*4 + NS*2 + NP*4)/10;

    NT(nota dos trabalhos) = (t1*1 + t2*2 + t3*3 + t4*2)/8
    NS(nota do seminário) = s
    NP(nota das provas) = (P1*4 + P2*6) / 10
*/

#include <stdio.h>

float
    NT, NP, t1, t2, t3, 
    t4, p1, p2, s;

int main(){
    // implementando as notas dos trabalhos
    scanf("%f %f %f %f", &t1, &t2, &t3, &t4); 

    //implementando as notas do seminário
    scanf("%f", &s); 

    // implementando as notas das provas
    scanf("%f %f", &p1, &p2); 

    //calculando as notas dos trabalhos e das provas
    NT = (t1*1 + t2*2 + t3*3 + t4*2)/8;
    NP = (p1*4 + p2*6)/10;

    //mostrando as notas
    printf("NT = %.2f\n", NT);
    printf("NS = %.2f\n", s);
    printf("NP = %.2f\n", NP);
    printf("NF = %.2f\n", (NT*4 + s*2 + NP*4)/10);

    return 0;
}