#include <stdio.h>
/*
Programa para calculo de la transpuesta de una matriz de 3x3
*/
void main(void)
{
    /* Se declaran las variables necesarias */
    /* Posiciones de la matriz original */
   
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;    
    /* Posiciones de la matriz transpuesta resultante */

    int posicion11, posicion12, posicion13, posicion21, posicion22, posicion23, posicion31, posicion32, posicion33; 
   
    /* Petición de datos al usuario */
    
    printf("MATRIZ DE 3X3 TRANSPUESTA ");
    
    printf("\n\nTeclea la matriz a transponer dando la fila 1, luego la fila 2 y por último la fila 3 (valores de corrido dejando un espacio entre cada uno): ");
    scanf("%d %d %d %d %d %d %d %d %d", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    
    /* Aquí se realiza la transposicion */
    posicion11= a11;
    posicion12= a21;
    posicion13= a31;
    posicion21= a12;
    posicion22= a22;
    posicion23= a32;
    posicion31= a13;
    posicion32= a23;
    posicion33= a33;
    
    /* Imprimir resultados */
    
    printf("\n\nLa matriz transpuesta resultante es:\n\n");
    printf("(posicion11 = %d posicion12 = %d posicion13 = %d)\n(posicion21 = %d posicion22 = %d posicion23 = %d)\n(posicion31 = %d posicion32 = %d posicion33 = %d)",
         posicion11, posicion12, posicion13, posicion21, posicion22, posicion23, posicion31, posicion32, posicion33);

}
