#include <stdio.h>

int main() {
    double p1,p2,valor;
    int c1,c2,q1,q2;
    scanf("%d %d %lf", &c1,&q1,&p1);
    scanf("%d %d %lf", &c2,&q2,&p2);

    valor=(p1*q1)+(p2*q2);
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
    return 0;
}