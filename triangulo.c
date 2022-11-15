
/*
La suma de los catetos al cuadrado es igual a la hipotenusa al cuadrado
Triángulo rectángulo: tiene un ángulo de 90° 
*/

#include<stdio.h>
#include<math.h>

void hipotenusa(){


    float co, ca, h;
    
	printf("Indica el valor del cateto opuesto:");
	scanf("%f",&co);
    printf("Indica el valor del cateto adyacente:");
	scanf("%f",&ca);   
    h=sqrt(co*co + ca*ca);
    printf("La hipotenusa mide: %f",h);


}


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


void angulo(){
	
	
	float a1,a2,a3;
	printf("Teclea el valor de los 2 angulos dejando un espacio entre cada valor:");
	scanf("%f %f",&a1,&a2);
	a3=180 -(a1+a2);
	printf("El tercer angulo mide : %f",a3);
	
}

int main(){
	
	
	char opc;
	printf("Eliga la opcion buscada tecleando la letra correspondiente: a)Hipotenusa,  b) area de un triangulo,   c)valor de un angulo faltante de un triangulo");
	scanf("%c",&opc);
	
	
	switch(opc){
		
		
		case 'a':
		hipotenusa();
		break;
		
		
		case 'b':
		area();
		break;
		
		
		
		case 'c':
		angulo();
		break;
	  	
		
		
	}
	
	
	return 0;
	

}