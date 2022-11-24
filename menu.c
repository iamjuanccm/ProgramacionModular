#include <stdio.h>
#include <math.h>
// By Juan Carlos Corona Marquez. 1196
/*
En cada funcion del programa se piden los datos 
necesarios para el calculo al usuario, se asignan a una variable 
e inmediatamente se realiza el calculo correspondiente 
*/
void hipotenusa(){


    float co, ca, h;
    
	printf("Indica el valor del cateto opuesto:");
	scanf("%f",&co);
    printf("Indica el valor del cateto adyacente:");
	scanf("%f",&ca);   
    h=sqrt(co*co + ca*ca);
    printf("La hipotenusa mide: %f",h);


}

/*
En cada funcion del programa de cuadrados se piden los datos 
necesarios para el calculo al usuario, se asignan a una variable 
e inmediatamente se realiza el calculo correspondiente 
*/

void area(){
	
	float base,alt;
	float a;
	printf("Teclea el valor de la base:");
	scanf("%f",&base);
	printf("Teclea el valor de la altura:");
	scanf("%f",&alt);
	a=base*alt/2;
	printf("El area del triangulo es: %f",a);
	
	
}

/*
En cada funcion del programa se piden los datos 
necesarios para el calculo al usuario, se asignan a una variable 
e inmediatamente se realiza el calculo correspondiente 
*/

void angulo(){
	
	
	float a1,a2,a3;
	printf("Teclea el valor de los 2 angulos dejando un espacio entre cada valor:");
	scanf("%f %f",&a1,&a2);
	a3=180 -(a1+a2);
	printf("El tercer angulo mide : %f",a3);
	
}

/*
PROGRAMA PARA CALCULOS CON TRIANGULOS 
Se hace uso de un switch para ejecutar 
la funcion correspondiente segun la 
peticion del usuario
*/

void triangulo(){
	
	int opci;
	printf("Eliga la opcion buscada tecleando el numero correspondiente: 1)Hipotenusa,  2) area de un triangulo,   3)valor de un angulo faltante de un triangulo" );
	scanf("%d",&opci);
	
	
	switch(opci){
		
		
		case 1:
		hipotenusa();
		break;
		
		
		case 2:
		area();
		break;
		
		case 3:
		angulo();
		break;

	    default: printf("No has seleccionado una opcion valida");
	}
}

/*
PROGRAMA PARA CALCULO DEL AREA DE CUADRADOS, RECTANGULOS Y/O TRAPECIOS
Se hace uso de un switch para ejecutar la funcion del area buscada por 
el usuario la cual esta puesta directamente en el switch y no como funcion
aparte
*/
void cuadrados(){

    int opcion;
    
    printf("Menu de opciones:\n");
    printf("\nElige el numero de la opcion de la figura deseada:\n\n1. Para calcular el area de un cuadrado\n2.Para calcular el area de un trapecio\n3.Para calcular el area de un rectangulo ");
    printf("\n\nOpcion:");scanf("%i",&opcion);
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
                printf("No has seleccionado una opcion valida");
        }


}


/*
En cada funcion del programa de conversiones se piden los datos 
necesarios para el calculo al usuario, se asignan a una variable 
e inmediatamente se realiza el calculo correspondiente al hacer uso
de un ciclo if para realizar la conversion a la unidad que se desee
*/

int opc, opc_c;
float temperatura,resultado;

void fahrenheit(){
    
    printf("Indica el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indica la conversion que buscas seleccionando el numero de la opcion correspondiente): \n\n 1. de Farenheit a Celsius \n 2. de Farenheit a Kelvin\n:");scanf("%i",&opc_c);
    
    if (opc_c==1){
        resultado= (temperatura - 32)*0.55 ;
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 459.67)*0.55 ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opcion valida");
    
    }
    
}
        

/*
En cada funcion del programa de conversiones se piden los datos 
necesarios para el calculo al usuario, se asignan a una variable 
e inmediatamente se realiza el calculo correspondiente al hacer uso
de un ciclo if para realizar la conversion a la unidad que se desee
*/

void celsius(){
    printf("Indica el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indica la conversion que buscas seleccionando el numero de la opcion correspondiente):\n1. de Celsius a Farenheit \n2. de Celsius a Kelvin\n:") ;scanf("%i",&opc_c);
    
    if (opc_c==1){
        resultado= (temperatura * 1.8) + 32 ;
        printf("El resultado es %.2f °F",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 273.15) ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opcion valida");
    
    }
    
}

/*
En cada funcion del programa de conversiones se piden los datos 
necesarios para el calculo al usuario, se asignan a una variable 
e inmediatamente se realiza el calculo correspondiente al hacer uso
de un ciclo if para realizar la conversion a la unidad que se desee
*/

void kelvin(){

    printf("Indica el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indica la conversion deseada seleccionando el numero de la opcion correspondiente)\n1. de Kelvin a Celsius \n2. de Kelvin a Farenheit \n:");scanf("%i",&opc_c);
     
    if (opc_c==1){
        resultado= (temperatura - 273.15);
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura - 273.15)*1.8 + 32 ;
        printf("El resultado es %.2f °F",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opcion valida");
    
    }
}

/*
FUNCION PRINCIPAL PARA EL PROGRAMA DE CALCULO DE CONVERSIONES DE TEMPERTURA
Se hace uso de un switch para ejecutar las conversiones segun la seleccion 
del usuario
*/
void conversiones(){

    printf("Indica la unidad de temperatura a convertir seleccionando el numero de la opcion correspondiente):");
    printf("\n");
    printf("\n1.°Farenheit\n2.°Celsius\n3.°Kelvin\n:");scanf("%i",&opc);


    switch(opc)
    { 
        
        case 1:
        fahrenheit();
        break;
    
        case 2:
        celsius();
        break;


        case 3:
        kelvin();
        break;   
    
        default:
        printf("No ha seleccionado una opcion valida");
    }    
}

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
void matrices1()
{
int t, a[10][10], b[10][10], c[10][10];
			printf("SUMA DE DOS MATRICES CUADRADAS. \n ");
			printf("POR FAVOR, CONSIDERA EL USO DE LAS POSICIONES CON 0 PARA INGRESAR LOS DATOS \n ");
			printf("*** NOTA: Los valores serán regresados de corrido, considera que no se otorga separacion entre cada fila ni columna \n ");
			printf("Teclea tamaño de la matriz cuadrada (dando el numero de filas o de columnas): ");
			scanf("%d",&t);
		       	tecleeMatriz(t,a,b);
				printf("LOS RESULTADOS SON: \n ");
				sumaMatriz(t,a,b,c);
}



//Programa para calcular multiplicacion de 2 matrices de 2x2
void matrices2()
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

/*
Programa para calculo de la transpuesta de una matriz de 3x3
*/
void matrices3()
{
    /* Se declaran las variables necesarias */
    /* Posiciones de la matriz original */
   
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;    
    /* Posiciones de la matriz transpuesta resultante */

    int posicion11, posicion12, posicion13, posicion21, posicion22, posicion23, posicion31, posicion32, posicion33; 
   
    /* Petición de datos al usuario */
    
    printf("MATRIZ DE 3X3 TRANSPUESTA ");
    
    printf("\n\nTeclea la matriz a transponer dando la fila 1, luego la fila 2 y por ultimo la fila 3 (valores de corrido dejando un espacio entre cada uno): ");
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



//Programa para calcular el factorial de un número otorgado por el usuario
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
void factorialcalc()
{
    float fact; 
    int n;
    printf("\n Teclea el numero al cual se le calculara el factorial: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("\n El factorial = %f \n", fact);
}


/* Programa para calculo del salario neto a partir de las horas laboradas,
el costo por hora y la tasa de IVA agregado del 16% sobre el
salario y 12% de IVA retenido. Si el salario neto es menor
a $10,000, agregar un bono del 5%*/

void salario() 
{
	//Declaraciones necesarias 
	int horasTrab;
	float sueldo,sueldPorDia,sueldomasIVA,sueldomenosIVA,sueldoMens,sueldoConBono;
	
	//Ingreso de datos del usuario
	printf("PROGRAMA PARA CALCULOS DE SALARIO NETO \n");
	printf("Teclea tu sueldo por hora: ");
	
	scanf("%f",&sueldo);
	printf("\nIndica, (en numeros) la cantidad de horas que trabajas al dia: ");
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
	printf("\nTu sueldo mensual (por 20 dias laborados) es: %f", sueldoMens);
	
	//Ciclo para asignar el bono de 5% en caso de que el sueldo mensual sea menor a 10,000
	if(sueldoMens<10000)
	{
		sueldoConBono=sueldoMens + (sueldoMens*0.05);
		printf("\nTu sueldo añadiendo un bono extra del 5 por ciento es: %f",sueldoConBono);
	}else
		printf("\nNo hay modificaciones a tu sueldo");
}


//MENU PRINCIPAL
/*Se hace uso de un switch para la opcion necesaria y correr 
el programa selecccionado con su numero corespondiente*/

int main(){

  int opc ;
  printf("MENU\n");
  printf("\nTeclea la opcion deseada escribiendo el numero que le corresponde:\n");
  
  printf("\n 1 para calculos con triangulos\n 2 para calcular el area de un cuadrado, rectangulo o trapecio\n 3 para conversiones de temperatura\n 4 para suma de matrices \n 5 para multiplicacion de matrices \n 6 para calculo de una matriz transpuesta \n 7 para calculo del factorial de un numero\n 8 para calculos de salario neto\n");
  scanf("%d",&opc);

/* La opcion elegida se le asigna a opc y 
con ella se ejecuta la funcion segun la peticion del usuario*/

  switch(opc){
    
     case 1: 
     triangulo();
     break;
  
     case 2: 
     cuadrados();
     break;
     
     case 3: 
     conversiones();
     break;
     
     case 4: 
     matrices1();
     break;
     
     case 5: 
     matrices2();
     break;
     
     case 6: 
     matrices3();
     break;
     
     case 7: 
     factorialcalc();
     break;
     
     case 8: 
     salario();
     break;
     
     default: printf("No has seleccionado una opcion valida");
     break;
  }
  
return 0;  
}
