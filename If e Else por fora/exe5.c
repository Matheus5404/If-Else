# include <stdio.h>
# define TAM 2

// 5. Receber dois números distintos e mostrar numeros iguais, o maior e menor deles.

int main()
{
	int vetor[TAM];
	int i;
	int maior, menor;
	
	// Recebe dois numeros distintos
	for(i=0 ; i<TAM ; i++)
	{
		do
		{
			// Verifica se ha numeros iguais
			printf("\nDigite um numero: ");
			scanf("%i", &vetor[i]);
			
			if(vetor[0] == vetor[1])
			{
				printf("\nNumeros iguais, digite novamente\n");
			}
		}while(vetor[0] == vetor[1]);
	}
		
	maior = vetor[0];
	menor = vetor[0];
	
	// Mostra o maior e menor deles
	for(i=0 ; i<TAM ; i++)
	{
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else
		{
			if(vetor[i] < menor)
			{
				menor = vetor[i];
			}
		}
	}
	
	
	printf("\nO maior numero: %i", maior);
	printf("\nO menor numero: %i", menor);
	
	return 0;
}
