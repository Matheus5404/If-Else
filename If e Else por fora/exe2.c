# include <stdio.h>

// 2. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. Se a média for maior ou igual a 5 escreva “aprovado”, senão escreva “reprovado”.

int main()
{
	float p1, p2 , media;
	
	printf("Digite a nota da Prova 1: ");
	scanf("%f", &p1);
	
	printf("\nDigite a nota da Prova 2: ");
	scanf("%f", &p2);
	
	media = (p1 + p2) / 2;
	
	if(media >= 5)
	{
		printf("\nAprovado");
	}
	else
	{
		if(media < 5)
		{
			printf("\nReprovado");
		}
	}
	
	return 0;
}

