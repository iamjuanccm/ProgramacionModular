//Programa para calcular multiplicación de 2 matrices de 2x2
#include <stdio.h>
void main(void)
{
    /* Se declaran las variables necesarias */
    float a11, a12, a21, a22;               /* Posiciones de la primera matriz a multiplicar */
    float b11, b12, b21, b22;               /* Posiciones de la segunda matriz a multiplicar */
    float posicion11, posicion12, posicion21, posicion22; /* Posiciones de la matriz resultante de la multiplicacion */
   
    /* Petición de datos al usuario */
    
    printf("Multiplicacion de 2 matrices de 2x2 ");
    
    printf("\n\nTeclea la primera matriz dando la fila 1 y luego la fila 2 (valores de corrido dejando un espacio entre cada uno): ");
    scanf("%f %f %f %f", &a11, &a12, &a21, &a22);
    
    printf("\n\nTeclea la segunda matriz dando la fila 1 y luego la fila 2 (valores de corrido dejando un espacio entre cada uno): ");
    scanf("%f %f %f %f", &b11, &b12, &b21, &b22);
    
    /* Aquí se realiza el Cálculo */
    
    posicion11 = (a11*b11) + (a12*b21);
    posicion12 = (a11*b12) + (a12*b22);
    posicion21 = (a21*b11) + (a22*b21);
    posicion22 = (a21*b12) + (a22*b22);
    
    /* Imprimir resultados */
    
    printf("\n\nLa matriz resultante es como se presenta a continuacion:\n\n");
    printf("(posicion11 = %f posicion12 = %f)\n(posicion21 = %f posicion22 = %f)",
         posicion11, posicion12, posicion21, posicion22);

}