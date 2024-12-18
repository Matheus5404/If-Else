#include <stdio.h>

/*4. Receber um salário bruto e calcular o salário líquido (salário bruto após descontar impostos). 
Imposto sobre salário de até R$ 2750.00 é de 15%, para salário maior que R$ 2750.00 é 25%. */

int main() {
    float salario_bruto, imposto;

    
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario_bruto);

   
    if (salario_bruto <= 2750.00) 
	{
        imposto = salario_bruto * 0.15;	 
    } 
	else 
	{
        imposto = salario_bruto * 0.25; 
    }


    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario Liquido: R$ %.2f\n", salario_bruto - imposto);

    return 0;
}

