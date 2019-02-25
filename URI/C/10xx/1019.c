#include <stdio.h>

int main() {
    int s,m,h,x;
    scanf("%d", &x);
    s=x%60;
    x=x/60;
    m=x%60;
    h=x/60;
    printf("%d:%d:%d\n", h,m,s);
    return 0;
}