#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    float interes = 0.15;
    int tiempo = 5;
    float monto;
    
    printf("Ingrese el monto del crédito: ");
    scanf("%f", &monto);

  
    float parte1 = monto / tiempo;
    float m1 = monto - parte1;
    
    float parte2 = m1 / tiempo;
    float m2 = m1 - parte2;
    
    float parte3 = m2 / tiempo;
    float m3 = m2 - parte3;
    
    float parte4 = m3 / tiempo;
    float m4 = m3 - parte4;
    
    float parte5 = m4 / tiempo;
    float m5 = m4 - parte5;

  
    float v1 = m1 * interes;
    float v2 = m2 * interes;
    float v3 = m3 * interes;
    float v4 = m4 * interes;
    float v5 = m5 * interes;

  
    int totalPagos = tiempo * 12;

  
    float cuotaMensual = (monto * (interes / 12)) / (1 - pow(1 + (interes / 12), -totalPagos));

 
    printf("Año\tInterés\tInterés por Mes\n");
    printf("1\t%.2f\t%.2f\n", v1, v1 / 12);
    printf("2\t%.2f\t%.2f\n", v2, v2 / 12);
    printf("3\t%.2f\t%.2f\n", v3, v3 / 12);
    printf("4\t%.2f\t%.2f\n", v4, v4 / 12);
    printf("5\t%.2f\t%.2f\n", v5, v5 / 12);
    
  
    printf("\nCuota mensual: %.2f\n", cuotaMensual);
   
    return 0;
}
