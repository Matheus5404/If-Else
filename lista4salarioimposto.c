#include <stdio.h>

/*4. Receber um sal�rio bruto e calcular o sal�rio l�quido (sal�rio bruto ap�s descontar impostos). 
Imposto sobre sal�rio de at� R$ 2750.00 � de 15%, para sal�rio maior que R$ 2750.00 � 25%. */

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

