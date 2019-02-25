#include <stdio.h>

main() {
    char h[100];
    double s,v;
    gets(h);
    scanf("%lf %lf",&s,&v);
    printf("TOTAL = R$ %.2f\n",(float)s+(v*.15));
}
