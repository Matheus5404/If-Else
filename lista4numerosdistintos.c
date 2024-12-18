#include <stdio.h>

int main() 
{
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

	if (num1 == num2)
	{
		printf("Os numeros devem ser distintos. Tente novamente.\n");	
	} 
	else
	{
		if (num1 > num2)
    	{
    		printf("\nO maior numero sera: %i", num1);	
		}
	else
	{
		printf("\nO maior numero sera: %i", num2);
	}
		if (num1 == num2)
		{
			printf("\n");
		} 
	else
	{
		if (num1 < num2)
		{
			printf("\nO menor numero sera: %i", num1);
		}
	else
		{
			printf("\nO menor numero sera: %i", num2);
		}
	}
	}
    return 0;
}

