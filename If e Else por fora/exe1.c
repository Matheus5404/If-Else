# include <stdio.h>

// 1. Receber um n�mero e informar se ele � negativo ou n�o � negativo.

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
