/* Programa: Hola mundo */

#include <stdio.h>

int main()
{
    //Declarar Variables
    int a =10, b = 15;
    
    //Imprimir el valor de las variables
    
    printf("El valor de la variable a es: %d\n",a);
    printf("El valor de la variable b es: %d\n",b);
    
    //Imprimir Dirrecion de Memoria
    
    printf("El valor en memoria de a es: %p\n", &a);
    printf("El valor en memoria de b es: %p\n", &b);
    
    //Punteros
    
    int *p;
    
    p = &a;//p apunta a la variable a 
    
	printf("El valor en memoria de la variable p es: %p\n",p);
	
	*p = 10;
	
	printf("El valor de la variable a es: %d\n",a);
	
	p = &b;
	
	*p = 2;

	*p = *p + a;
   
   	printf("El valor de la variable b es: %d\n",b);
   
   
    return 0;
}
