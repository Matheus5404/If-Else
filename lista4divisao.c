# include <stdio.h> 
# include <locale.h>

/*6. Receber numerador e denominador e calcular o resultado da divisão, desde que possível 
(denominador diferente de zero). Se não for possível dividir, apenas escreva “não existe divisão por zero”.*/

int main ()
{ 
	setlocale(LC_ALL, "Portuguese");
	float numerador, denominador;
	
	printf("Digite o numerador: ");
	scanf("%f", &numerador);
	
	printf("Digite o denominador: ");
	scanf("%f", &denominador);
	
	if (denominador != 0)
	{
		printf("\nA divisão sera: %.2f", numerador/denominador);
	}
		else 
		{
			printf("\nNão existe divisão por zero");
		}
		
		return 0;
}

		
