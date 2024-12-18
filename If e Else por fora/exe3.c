# include <stdio.h>

// 3. Como no exercício anterior, calcular a média. Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5.

int main()
{
	float p1, p2;
	float media, recuperacao;
	
	printf("Digite a nota da Prova 1: ");
	scanf("%f", &p1);
	
	printf("Digite a nota da Prova 2: ");
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
			recuperacao = 5 - media;
			printf("\nReprovado\n");
			printf("\nFalta %.2f pontos para passar de Semestre", recuperacao);
		}
	}
	
	return 0;
}
