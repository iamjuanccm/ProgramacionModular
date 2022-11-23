#include <stdio.h>
//PROGRAMA PARA SUMA DE DOS MATRICES CUADRADAS

//Funcion para la suma 
void sumaMatriz(int t, int a[10][10],int b[10][10],int c[10][10])
{
	for (int i=0;i<t;i++)
	{

		for (int j=0;j<t;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d", c[i][j]);
		}
	}
}
//Funcion para el tecleo de las matrices a sumar 
void tecleeMatriz(int t, int a[10][10],int b[10][10])
{
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<t;j++)
		{
			printf("Teclea el valor de la matriz A con posicion[%d],[%d]: ",i,j);
			scanf("%i",&a[i][j]);
			printf("Teclea el valor de la matriz B con posicion [%d],[%d]: ",i,j);
			scanf("%i",&b[i][j]);
		}
	}
}
//Aqui se llamaran las funciones anteriores a partir del tamaño de matriz otorgado
int main ()
{
int t, a[10][10], b[10][10], c[10][10];
			printf("SUMA DE DOS MATRICES CUADRADAS. \n ");
			printf("POR FAVOR, CONSIDERA EL USO DE LAS POSICIONES CON 0 PARA INGRESAR LOS DATOS \n ");
			printf("*** NOTA: Los valores serán regresados de corrido, considera que no se otorga separacion entre cada fila ni columna \n ");
			printf("Teclea tamañano de la matriz cuadrada (dando el numero de filas o de columnas): ");
			scanf("%d",&t);
		       	tecleeMatriz(t,a,b);
				printf("LOS RESULTADOS SON: \n ");
				sumaMatriz(t,a,b,c);
				return 0;
}
