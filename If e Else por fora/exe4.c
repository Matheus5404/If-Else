# include <stdio.h>

/* 4. Receber um sal�rio bruto e calcular o sal�rio l�quido (sal�rio bruto ap�s descontar impostos). 
Imposto sobre sal�rio de at� R$ 2750.00 � de 15%, para sal�rio maior que R$ 2750.00 � 25%.  */

int main()
{
	float sal_bruto, sal_liquido, desconto;
	
	printf("Digite o seu Salario Bruto: ");
	scanf("%f", &sal_bruto);
	
	if(sal_bruto <= 2750)
	{
		sal_liquido = (sal_bruto * 0.15);
		desconto = sal_bruto - sal_liquido;
	}
	else
	{
		if(sal_bruto > 2750)
		{
			sal_liquido = (sal_bruto * 0.25);
			desconto = sal_bruto - sal_liquido;
		}
	}
	
	printf("\nO desconto do seu Salario Bruto e de %.2f e passa valer: %.2f",sal_liquido, desconto);
	
	return 0;
}
