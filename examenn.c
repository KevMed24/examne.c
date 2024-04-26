#include <stdio.h>
int main(void) {
  float tasainteres;
  float tasaimpuestorenta;
  float tasaInteresMensual;
  int totalmeses;
  int montomensual;
  float ahorrototal = 0;
  float interestotal = 0;

  printf("Ingrese el total de meses\n");
  scanf("%d", &totalmeses);
  printf("Ingrese el monto mensual\n");
  scanf("%d", &montomensual);
  printf("Ingrese la tasa de interés anual\n");
  scanf("%f", &tasainteres);
  printf("Ingrese la tasa de impuesto a la renta\n");
  scanf("%f", &tasaimpuestorenta);
  tasaInteresMensual = tasainteres / 12.0 / 100;

  printf("Mes\tAhorro\t\tInteres Mensual\tAhorro Total\n");

  for(int mes = 1; mes <= totalmeses; mes++){
    float interes = (ahorrototal + montomensual) * tasaInteresMensual;
    interes = interes * tasaimpuestorenta; // Impuesto a la renta

    ahorrototal = ahorrototal + montomensual + interes;
    interestotal = interes;

    printf("%d\t$%d\t$%.2f\t$%.2f\n", mes, montomensual, interes, ahorrototal);
  }
  float interesFinal = interestotal - montomensual * totalmeses;
  float ahorroMasInteres = ahorrototal + interesFinal;

  printf("Ahorro Total: $%.2f\n", ahorrototal);
  printf("Interes Total: $%.2f\n", interestotal);
  printf("Total Tasa de Interes: $%.2f\n", interesFinal);
  printf("Valor Total (Ahorro + Interes): $%.2f\n", ahorroMasInteres);
  return 0;
}