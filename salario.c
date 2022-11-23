#include <stdio.h>

/* Programa para calculo del salario neto a partir de las horas laboradas,
el costo por hora y la tasa de IVA agregado del 16% sobre el
salario y 12% de IVA retenido. Si el salario neto es menor
a $10,000, agregar un bono del 5%*/

int main() 
{
	//Declaraciones necesarias 
	int horasTrab;
	float sueldo,sueldPorDia,sueldomasIVA,sueldomenosIVA,sueldoMens,sueldoConBono;
	
	//Ingreso de datos del usuario
	printf("Teclea tu sueldo por hora: ");
	
	scanf("%f",&sueldo);
	printf("\nIndica, (en números) la cantidad de horas que trabajas al día: ");
	scanf("%d",&horasTrab);
	
	//Se realiza el calculo del sueldo por día
	sueldPorDia=sueldo*horasTrab;
	printf("\nTu sueldo por dia es: %f",sueldPorDia);
	
	//Se hace el calculo del sueldo más el 16% de IVA
	sueldomasIVA= sueldPorDia + (sueldPorDia*0.16);
	printf("\nTu sueldo por dia mas el 16 porciento de IVA es: %f",sueldomasIVA);
	
	//Se hace el calculo del sueldo menos el 12% de IVA
	sueldomenosIVA= sueldomasIVA - (sueldomasIVA*0.12);
	printf("\nTu sueldo por dia menos 12 porciento de IVA es: %f",sueldomenosIVA);
	
	//Se hace el calculo del sueldo mensual a 20 dias
	sueldoMens=sueldomenosIVA*20;
	printf("\nTu sueldo mensual (por 20 días laborados) es: %f", sueldoMens);
	
	//Ciclo para asignar el bono de 5% en caso de que el sueldo mensual sea menor a 10,000
	if(sueldoMens<10000)
	{
		sueldoConBono=sueldoMens + (sueldoMens*0.05);
		printf("\nTu sueldo añadiendo un bono extra del 5 por ciento es: %f",sueldoConBono);
	}else
		printf("\nNo hay modificaciones a tu sueldo");
	return 0;
}
