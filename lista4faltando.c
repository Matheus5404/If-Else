#include <stdio.h>

int main ()
{
	float prova1, prova2, media;
	
	printf("Digite a prova 1: ");
	scanf("%f", &prova1);
	
	printf("Digite a prova 2: ");
	scanf("%f", &prova2);
	
	media = (prova1 + prova2)/2;
	
	printf("\nMedia : %.2f", media);
	
	if(media >= 5)
	{
		printf("\nAprovado");
	}
	else
	{
		float faltando = 5 - media;
		printf("\nFaltou %.2f para atingir 5", faltando);
	}
	
	return 0;
}
