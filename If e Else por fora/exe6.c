# include <stdio.h>

/* 6. Receber numerador e denominador e calcular o resultado da divisão, desde que possível (denominador diferente de zero). 
Se não for possível dividir, apenas escreva “não existe divisão por zero”.  */

int main()
{
	float numerador, divisao, denominador;
	
	printf("Digite o numerador: ");
	scanf("%f", &numerador);
	
	printf("Digite o denominador: ");
	scanf("%f", &denominador);
	
	divisao = numerador / denominador;
	
	if(denominador > 0)
	{
		printf("%.2f", divisao);
	}
	else
	{
		if(denominador == 0)
		{
			printf("\nNao existe divisao por zero");
		}
	}
	
	
	return 0;
}
