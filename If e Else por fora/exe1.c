# include <stdio.h>

// 1. Receber um número e informar se ele é negativo ou não é negativo.

int main()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if(numero == 0)
	{
		printf("\nNumero nulo");
	}
	else
	{
		if(numero > 0)
		{
			printf("\nNumero positivo");
		}
		else
		{
			printf("\nNumero Negativo");
		}
	}
	
	return 0;
}
