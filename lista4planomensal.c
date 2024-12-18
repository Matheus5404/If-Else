# include <stdio.h>

/* Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês, independente de utilizá-los integralmente ou não. 
Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
Receber quantos minutos foram gastos no mês e calcular o valor da conta.*/

int main ()
{

	float minutos_gastos, minutos_excedidos;
	
	printf("Digite a quantidade de tempo gasto no dia: ");
	scanf("%f", &minutos_gastos);
	
	if (minutos_gastos >= 50)
	{
		minutos_excedidos = minutos_gastos * 1.50;
		printf("\nVoce excedeu o valor de 50 reais entao tera que pagar: %.2f reais", minutos_excedidos);
	}
	else
	{
		50 - minutos_gastos;
		printf("\nVoce ainda tem %.0f minutos para usar", 50 - minutos_gastos);
	}
	
	return 0;
	
}
