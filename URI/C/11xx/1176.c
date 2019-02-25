#include <stdio.h>
long long int fibo(int a){
    int i=0;
    long long int f1=0,f2=1,f3=0;
    while(i<a){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        i++;
    }
    return f1;
}
int main() {
    int i,n,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&d);
        printf("Fib(%d) = %llu\n", d,fibo(d));
    }
    return 0;
}