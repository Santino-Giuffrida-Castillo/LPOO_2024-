#include <stdio.h>
int main()
{
    int opcion;
    /*Ejercicio1*/
    int alumno = 0;
    int costo_alumno = 0;
    int micro = 0;

    /*Variables Ejercicio2*/
    int sueldototal = 0;
    int N_ventas = 0;
    int preciodeventa = 0;
    int sueldo = 0;
    int comision = 0;
    int venta = 0;
    int ventasT = 0;
    int var2 = 1;

    /*Variables Ejercicio3*/
    float calificacion_final;
    float parciales;
    float valor_parciales;
    float promparciales;
    float examenfinal;
    float trabajofinal;
    int var3 = 1;

    /*Variables Ejercicio4*/
    int Num1;
    int Num2;

    /*Variables Ejercicio5*/
    int Auto1 = 70;
    int Auto2 = 150;

    printf("Ingresar el ejercicio que desea realizar\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Introduce la cantidad de alumnos\n");
        scanf("%d", &alumno);
        if (alumno <= 100)
        {
            costo_alumno = 500;
            micro = costo_alumno * alumno;
            printf("Lo que debe pagar cada alumno es %d, y por el micro %d\n", costo_alumno, micro);
        }

        else if (alumno > 50 && alumno < 99)
        {
            costo_alumno = 400;
            micro = costo_alumno * alumno;
            printf("Lo que debe pagar cada alumno es %d, y por el micro %d\n", costo_alumno, micro);
        }
        else if (alumno >= 30 && alumno < 49)
        {
            costo_alumno = 300;
            micro = costo_alumno * alumno;
            printf("Lo que debe pagar cada alumno es %d, y por el micro %d\n", costo_alumno, micro);
        }

        else if (alumno < 30)
        {
            costo_alumno = costo_alumno / alumno;
            micro = 6000;
            printf("Lo que debe pagar cada alumno es %d, y por el micro %d\n", costo_alumno, micro);
        }
        break;
    case 2:
        printf("Introduzca el sueldo\n");
        scanf("%d", &sueldo);
        printf("Introduzca la cantidad de ventas\n");
        scanf("%d", &N_ventas);

        for (int i = 0; i < N_ventas; i++)
        {
            printf("Introduzca el valor de la venta N%d \n", var2);
            scanf("%d", &venta);
            ventasT += venta;
            comision += venta * 0.1;
            var2++;
        }

        sueldo = sueldo + comision;
        printf("El sueldo total es %d\n", sueldo);
        break;
    case 3:
        printf("Introducir los parciales que hizo\n");
        scanf("%f", &parciales);
        for (int i = 0; i < parciales; i++)
        {
            printf("Introducir el valor del parcial N%d\n", var3);
            scanf("%f", &valor_parciales);
            promparciales += valor_parciales;
            var3++;
        }
        printf("Introducir la nota del examen final\n");
        scanf("%f", &examenfinal);
        printf("Introducir el valor del trabajo final\n");
        scanf("%f", &trabajofinal);
        promparciales = promparciales / parciales;
        calificacion_final = (promparciales * 0.55) + (examenfinal * 0.3) + (trabajofinal * 0.15);
        printf("La nota final es %f", calificacion_final);

        break;
    case 4:
        printf("Introducir el primer numero:");
        scanf("%d", &Num1);
        printf("Introducir el segundo numero:");
        scanf("%d", &Num2);
        int Num3 = Num2 - Num1;
        if (Num1 == Num2)
        {
            printf("Los numeros son iguales, por lo que no hay numeros entre ellos");
        }
        if (Num1 < Num2)
        {

            for (int i = 0; i <= Num3; i++)
            {
                if (Num1 % 2 == 0)
                {
                    printf("%d\t", Num1);
                    Num1++;
                }
                else
                {
                    Num1++;
                }
            }
        }
        else
        {

            for (int i = 0; i <= Num3; i++)
            {
                if (Num2 % 2 == 0)
                {
                    printf("%d\t", Num2);
                    Num2++;
                }
                else
                {
                    Num2++;
                }
            }
        }
        break;
    case 5:
        while (Auto1 != Auto2)
        {
            Auto1++;
            Auto2--;
        }
        if (Auto1 == Auto2)
        {
            printf("Se encuentran en el kilometro %d", Auto1);
        }
        break;
    }
    return 0;
}