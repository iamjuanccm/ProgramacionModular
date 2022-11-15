/* 
Programa para calcular el area de cuadrados, trapecios y/o rectángulos
*/
#include<stdio.h>
#include<math.h>


int main(){

    int opcion;
    
    printf("Menú:\n");
    printf("\nElige el número de la opción de la figura deseada:\n\n1. Para calcular el area de un cuadrado\n2.Para calcular el area de un trapecio\n3.Para calcular el area de un rectangulo ");
    printf("\n\nOpción:");scanf("%i",&opcion);
    int lado;
    float b_mayor,b_menor,altura;
    float base,r_altura;
    float resultado;
    
	switch (opcion)
        {
            case 1:
				printf("Valor de un lado del cuadrado:");scanf("%i",&lado);
                resultado= lado * lado;
                printf("El resultado es: %.2f",resultado);

            break;

            case 2:
                
                printf("Indica el valor de la base mayor:");scanf("%f",&b_mayor);
                printf("Indica el valor de la base menor:");scanf("%f",&b_menor);
                printf("Indica el valor de la altura:");scanf("%f",&altura);
                resultado=((b_mayor + b_menor) * altura/2);
                printf("El resultado es:%.2f",resultado);
            break;

            case 3:
               
                printf("Indica el valor de la base y de la altura del rectangulo:");scanf("%f %f",&base,&r_altura);
                resultado= base * r_altura;
                printf("El resultado es: %.2f",resultado);
            break;


            default:
                printf("No has seleccionado una opción valida");
        }




    return 0;
}