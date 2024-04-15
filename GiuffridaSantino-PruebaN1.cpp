/* Tema 4
14/04 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    /* VARIABLES1 */
    int año;
    /* VARIABLES2 */
    int numero;
    /* VARIABLES3 */
    int cantEntradas;
    int valorEntradas = 1000;
    /* VARIABLES4 */
    int costoPlato = 6500;
    int personas;
    /* VARIABLES5 */
    char tipo;
    int tamaño;
    int precio;
    /* DECLARO LA VARIABLE OPCION PARA HACER EL SWITCH */
    int opcion;
    /* PREGUNTO QUE EJERCICIO QUIERE HACER, LE PIDO QUE EL USUARIO PONGA EL VALOR A LA VARIABLE */
    printf("Ingrese el numero del ejercicio: ");
    scanf("%d", &opcion);
    switch(opcion){
       case 1:
        
            
            /* PIDO QUE LE DE UN VALOR A LA VARIABLE LLAMADA AÑO */
            printf("Ingrese el año: \n");
            scanf("%d", &año);
            /* PREGUNTO QUE SI ES DIVISIBLE POR 4 Y NO ES IMPRIMO QUE ES BISIESTO */
            if(año % 4 == 0 && año % 100 != 0){
                printf("Es bisiesto");
            }
            /* COMO SI ES DIVISIBLE POR 400 ES BISIESTO ASI QUE PREGUNTO SI LA VARIABLE ES DIVISIBLE POR 400 */
            else if(año % 400 == 0){
                printf("Es bisiesto");
            }
            else{
                printf("No es bisiesto");
            }
        
        
        break;
         
       case 2:
        
            /* LE PIDO AL USUARIO QUE INGRESE UN VALOR A LA VARIABLE NUMERO */
            printf("Ingrese el numero para verificar (no tiene que ser entero y mayor a 0):  \n");
            scanf("%d", &numero);
            /* SI NUMERO ES MENOR A 0 IMPRIMO QUE NO CUMPLE LAS CONDICIONES */
            if(numero < 0){
                printf("El numero no cumple con las condiciones");
            }
            else{
                printf("%d\t,%d\t,%d\t,%d\t,%d\t,%d\t,%d\t,%d\t,%d\t,%d\t", numero, numero * 2, numero * 3, numero * 4, numero * 5, numero * 6, numero * 7, numero * 8, numero * 9, numero * 10);
            }

        

            break;
        
       case 3:
        
            /* PIDO QUE EL USUARIO LE DE UN VALOR A LA VARIABLE ENTRADAS */
            printf("Introducir la cantidad de entradas");
            scanf("%d", &cantEntradas);
            /* SI ENTRADAS ES MAYOR A 4 (QUE NO ESTA PERMITIDO), IMPRIMO UN MENSAJE DE "ERROR" */
            if(cantEntradas > 4){
                printf("Solo se pueden comprar 4 entradas");
            }
            /* PREGUNTO EL VALOR DE ENTRADAS Y APLICO LOS DESCUENTOS CORRESPONDIENTES */
            if(cantEntradas == 2){
                printf("El costo seria: %d", valorEntradas * 0.1);
            }
            else if(cantEntradas == 3){
                printf("El costo seria: %d", valorEntradas * 0.15);
            }
            else if(cantEntradas == 4){
                printf("El costo seria: %d", valorEntradas * 0.2);
            }

        

            break;
        
       case 4:
        
        
            /* PIDO QUE EL USUARIO INGRESE LA CANTIDAD DE PERSONAS */
            printf("Ingrese la cantidad de personas");
            scanf("%d", &personas);
            /* PREGUNTO LA CANTIDAD DE PERSONAS Y DEPENDIENDO DEL VALOR CAMBIO EL COSTO DEL PLATO */
            if(personas > 200 && personas <= 300){
             costoPlato = 5500;
             printf("El costo por plato es: %d", costoPlato);
            }
            else if(personas > 300){
             costoPlato = 4500;
             printf("El costo por plato es: %d", costoPlato);
            }
        
            break;
         
       case 5:
        
            /* PIDO LOS DATOS */
            printf("Ingrese el tipo: ");
            scanf("%c", &tipo);
            printf("Ingrese el tamaño: ");
            scanf("%d", &tamaño);
            /* PREGUNTO SI EL VALOR DE LA VARIABLE TIPO ES A O B, DESPUES PREGUNTO SI ES TAMAÑO 1 O 2*/
            if(tipo = "A"  && tamaño == 1){
                precio = 200;
                printf("El precio es: %d", precio);
            }
            else if(tipo = "A" && tamaño == 2){
                precio = 300;
                printf("El precio es: %d", precio);
            }
            else if(tipo = "B" && tamaño == 1){
                precio = 300;
                printf("El precio es: %d", precio);
            }
            else if(tipo = "B" && tamaño == 2){
                precio = 500;
                printf("El precio es: %d", precio);
            }
            else{ 
                printf("Puso cualquier cosa");
            }
        
            break;
         
        
    }
    
}