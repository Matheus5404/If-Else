# include <stdio.h>

/* 4. Receber um salário bruto e calcular o salário líquido (salário bruto após descontar impostos). 
Imposto sobre salário de até R$ 2750.00 é de 15%, para salário maior que R$ 2750.00 é 25%.  */

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
