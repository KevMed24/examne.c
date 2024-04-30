#include <stdio.h>
#include <math.h>

float capital, tiempo,año1,año2,año3,año4,año5,años;
float i1,i2,i3,i4,i5;
float int1,int2,int3,int4,int5;
float m1,m2,m3,m4,m5;
float mes1,mes2,mes3,mes4,mes5;
float It;
float i=0.15;

void imprimirInteres(float interesAnual, float interesMensual, int año) {
    printf("%d\t%f\t%f\n", año, interesAnual, interesMensual);
}

float calcularInteresTotal(float i1, float i2, float i3, float i4, float i5) {
    return i1 + i2 + i3 + i4 + i5;
}

int main()
{
    printf("Ingrese el monto que desea calcular\n");
    scanf("%f",&capital);
   
    años=capital/5;
    año1=capital;
    i1=año1*i;
    año2=capital-años;
    i2=año2*i;
    año3=año2-años;
    i3=año3*i;
    año4=año3-años;
    i4=año4*i;
    año5=año4-años;
    i5=año5*i;
   
    mes1=años+i1;
    m1=mes1/12;
    mes2=años+i2;
    m2=mes2/12;
    mes3=años+i3;
    m3=mes3/12;
    mes4=años+i4;
    m4=mes4/12;
    mes5=años+i5;
    m5=mes5/12;
   
    It= calcularInteresTotal (i1,i2,i3,i4,i5);
   
   
    printf("Año\tInterés Anual\tInterés Mensual\n");
    printf("1\t%f\t%f\n", i1, m1);
    printf("2\t%f\t%f\n", i2, m2);
    printf("3\t%f\t%f\n", i3, m3);
    printf("4\t%f\t%f\n", i4, m4);
    printf("5\t%f\t%f\n", i5, m5);
   
    printf("El interés total es: %f\n", It);

   
    return 0;
}
