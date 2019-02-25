#include <stdio.h>

int main() {
    int a,g,d,c;
    c=0;
    a=0;
    g=0;
    d=0;
    while(c!=4){
        scanf("%d", &c);
        if(c==1){
            a++;
        }else if(c==2){
            g++;
        }else if(c==3){
            d++;
        }
    };
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a,g,d);
    return 0;
}