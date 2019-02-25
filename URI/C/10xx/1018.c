#include <stdio.h>

int main()
{
	int n, i, valor;
	int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
	
	char cedulasString[7][7] = {"100,00", "50,00", "20,00", "10,00", "5,00", "2,00", "1,00"};
	char cedulaString[15] = {" nota(s) de R$ "};

	scanf("%d", &valor);
	printf("%d\n", valor);
	for (i = 0, n = 6; i < n; i++)
	{ //NOTAS
	    printf("%d%s%s\n", (int)(valor / cedulas[i]), cedulaString, cedulasString[i]);
	    valor = valor % cedulas[i];
    }
	printf("%d%s%s\n", (int) valor, cedulaString, (cedulasString[i]));
	
	return 0;
}