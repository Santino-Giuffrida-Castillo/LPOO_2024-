/* También  conocida como conjetura 3n+1 o conjetura de Ulam

Considere el siguiente proceso repetitivo para un número entero dado: 
si el número es 1, el proceso termina. De lo contrario, si es par se divide entre 2, y si es impar se multiplica por 3 y se le suma 1. 
Si empezamos con 6, por ejemplo, obtendremos la sucesión de números 6, 3, 10, 5, 16, 8, 4, 2, 1. 
La conjetura de Collatz dice que, a partir de cualquier número inicial, la sucesión obtenida siempre termina en 1. 
Escriba un programa que permita verificar la conjetura de Collatz para cualquier entero dado, y que imprima la secuencia correspondiente. */
#include<stdio.h>
int main(){
    int numero = 0;
    printf("Ingrese numero\n");
    scanf("%d", &numero);
    while(numero != 1){
         
        if(numero % 2 == 0){
            numero = numero / 2;
           
        
        }
    else{
        numero = (numero * 3) + 1;
    }
     printf("%d ", numero);
    }
return 0;
}
