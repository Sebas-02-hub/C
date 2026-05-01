#include <stdio.h>
#include <math.h>


void main(int a, int b){


    printf("ingrese primer parametro:" );
    
    scanf("%d",&a);

    printf("ingrese segundo parametro: ");
    scanf("%d",&b);

    float C =(float) a/b;
    // suma
    printf("la suma de los parametros es = %d\n ", a+b);

    // resta
    printf("la resta de los parametros es = %d\n ", a-b);
    // multiplicacion
    printf("la multi de los parametros es = %d\n ", a*b);
    // division
    printf("la division de los parametros es = %f\n ", C);
    //potencia
    printf("la potencia de los parametros es = %d\n ", (int) pow(a, b));
    // residuo
    printf("la el resiudo de los parametros es = %d\n ", a%b);
    // inidique si es mayor igual o menor 
   




    

    
}