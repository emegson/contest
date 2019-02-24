#include <stdio.h>
#include <stdlib.h>

//problema 1021;

int main()
{
    double valor;
    int n, i;
    float cedulas[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00}; 
    double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    char cedulaString[15] = {" nota(s) de R$ "}, moedaString[16] = {" moeda(s) de R$"};

    scanf("%lf", &valor);
    //printf("valor = %lf\n", valor);
    printf("NOTAS:\n");
    
    for(i=0, n=6; i<n; i++)
    {   //NOTAS
        printf("%d%s%.2f\n", (int)(valor/(cedulas[i])), cedulaString, (cedulas[i]));
        valor = valor - ((int)(valor/(cedulas[i]))*cedulas[i]);
    }
    printf("MOEDAS:\n");
    for(i=0, n=6; i<n; i++)
    {   //NOTAS
        printf("%d%s %.2f\n", (int)(valor/(moedas[i])), moedaString, moedas[i]);
        valor = valor - ((int)(valor/(moedas[i])) * moedas[i]);
    }
    return 0;
}