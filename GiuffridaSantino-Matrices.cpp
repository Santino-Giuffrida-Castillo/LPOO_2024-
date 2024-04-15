#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int x, y;
    printf("Ingrese el valor del largo\n");
    scanf("%d", &x);
    printf("Ingrese el valor del alto\n");
    scanf("%d", &y);
    int A[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            A[i][j] = 0;
        }
        
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
return 0; 
}
