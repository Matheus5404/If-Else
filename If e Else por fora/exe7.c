# include <stdio.h>

/* 7. Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, independente de utiliz�-los integralmente ou n�o. 
Por�m, se voc� utilizar mais do que 50 minutos, � cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
Receber quantos minutos foram gastos no m�s e calcular o valor da conta.  */

int main()
{
	float plano, cobranca, taxa=50, falta;
	
	printf("Digite quantas horas voce usou do seu plano: ");
	scanf("%f", &plano);
	
	if(plano >= 50)
	{
		cobranca = plano * 1.50;
		taxa = cobranca - plano;
		printf("\nVoce usou mais 50 minutos do seu plano e tera que pagar a mais\n");
		printf("\nO valor cobrado sera de %.2f no total de: %.2f", taxa, cobranca);
	}
	else
	{
		if(plano < 50)
		{
			falta = taxa - plano;
			printf("\nAinda falta %.2f minutos para acabar os 50 minutos", falta);
		}
	}
	
	
	return 0;
}
