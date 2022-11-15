
//Programa para realizar conversiones de temperatura
#include<stdio.h>


int opc, opc_c;
float temperatura,resultado;


void fahrenheit(){
    
    printf("Indica el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indica la conversión que buscas seleccionando el número de la opción correspondiente): \n\n 1. de Farenheit a Celsius \n 2. de Farenheit a Kelvin\n:");scanf("%i",&opc_c);
    
    if (opc_c==1){
        resultado= (temperatura - 32)*0.55 ;
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 459.67)*0.55 ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opción valida");
    
    }
    
}
        

void celsius(){
    printf("Indica el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indica la conversión que buscas seleccionando el número de la opción correspondiente):\n1. de Celsius a Farenheit \n2. de Celsius a Kelvin\n:") ;scanf("%i",&opc_c);
    
    if (opc_c==1){
        resultado= (temperatura * 1.8) + 32 ;
        printf("El resultado es %.2f °F",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura + 273.15) ;
        printf("El resultado es %.2f K",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opción valida");
    
    }
    
}

void kelvin(){

    printf("Indica el valor de la temperatura:");scanf("%f",&temperatura);
    printf("\n\n");
    printf("Indica la conversión deseada seleccionando el número de la opción correspondiente)\n1. de Kelvin a Celsius \n2. de Kelvin a Farenheit \n:");scanf("%i",&opc_c);
     
    if (opc_c==1){
        resultado= (temperatura - 273.15);
        printf("El resultado es %.2f °C",resultado);
    
    }
    
    else if(opc_c==2 ){
        resultado= (temperatura - 273.15)*1.8 + 32 ;
        printf("El resultado es %.2f °F",resultado);
    }    
    

    else{
        printf("No ha seleccionado una opción valida");
    
    }
}


int main(){

    printf("Indica la unidad de temperatura a convertir seleccionando el numero de la opción correspondiente):");
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
            printf("No ha seleccionado una opción valida");
    }    
    return 0;
}