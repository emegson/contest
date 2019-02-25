#include <stdio.h>

int main() {
    int n,i,a;
    scanf("%d",&n);
    int v[n];
    scanf("%d",&a);
    v[0]=a;
    a=0;
    for(i=1;i<n;i++){
        scanf("%d",&v[i]);
        if(v[i]<v[a]){
            a=i;
        }
    }
    printf("Menor valor: %d\n",v[a]);
    printf("Posicao: %d\n",a);
    return 0;
}