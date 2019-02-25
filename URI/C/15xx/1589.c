#include <stdio.h>

int main() {
    int a,b,d,c;
    scanf("%d", &c);
    d=0;
    while(c>0){
        scanf("%d %d", &a,&b);
        printf("%d\n",a+b);
        c--;
    };
    return 0;
}