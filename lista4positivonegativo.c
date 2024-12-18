#include <stdio.h>

int main ()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if(numero >=0)
	{
		printf("\nPositivo");
	}
	else
	{
		printf("\nNegativo");
	}

	return 0;
}
