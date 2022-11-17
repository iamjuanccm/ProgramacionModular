//Programa para calcular el factorial de un número otorgado por el usuario
#include <stdio.h>
/*Declaraciones correspondientes y establecimiento del ciclo para regresar 1 en caso de que se pida el 
factorial de 0 y para calcular el factorial de números mayores a 0*/
float factorial(int n)
{
    float f;
    if (n==0) f=1;
    else f=n*factorial(n-1);
    return f;
}
/*Declaraciones correspondientes, petición al usuario del número a calcularse el factorial 
y regreso del factorial resultante al usuario
*/
int main()
{
    float fact; 
    int n;
    printf("\n Dame un numero: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("\n El factorial = %f \n", fact);
    return 0;
}
