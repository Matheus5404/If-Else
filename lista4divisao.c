# include <stdio.h> 
# include <locale.h>

/*6. Receber numerador e denominador e calcular o resultado da divis�o, desde que poss�vel 
(denominador diferente de zero). Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�.*/

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
		printf("\nA divis�o sera: %.2f", numerador/denominador);
	}
		else 
		{
			printf("\nN�o existe divis�o por zero");
		}
		
		return 0;
}

		
