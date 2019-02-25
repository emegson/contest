#include <stdio.h>

int main()
{
    int a, p, i, po, ne, c;
    c = 0;
    p = 0;
    i = 0;
    po = 0;
    ne = 0;
    while (c < 5)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            p++;
        }
        else
        {
            i++;
        }
        if (a < 0)
        {
            ne++;
        }
        else if (a > 0)
        {
            po++;
        }
        c++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", p, i, po, ne);
    return 0;
}