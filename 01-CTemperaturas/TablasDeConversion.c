#include <stdio.h>
#include "Conversion.h"

void PrintFila(float input, float salida) {
    printf("%.2f\t\t%.2f\n", input, salida);
}

void PrintFilas(float (*conversion)(float), float lower, float upper, float increment) {
    for (float i = lower; i <= upper; i += increment) {
        float salida = conversion(i);
        PrintFila(i, salida);
    }
}

void PrintTablaCelsius(float lower, float upper, float increment) {
    printf("Celsius\t\tFahrenheit\n");
    PrintFilas(Fahrenheit, lower, upper, increment);
}

void PrintTablaFahrenheit(float lower, float upper, float increment) {
    printf("Fahrenheit\tCelsius\n");
    PrintFilas(Celsius, lower, upper, increment);
}

void PrintTablas() {
    float lower = 0.0f;
    float upper = 100.0f;
    float increment = 10.0f;

    printf("Tabla de Celsius a Fahrenheit:\n");
    PrintTablaCelsius(lower, upper, increment);

    printf("\nTabla de Fahrenheit a Celsius:\n");
    PrintTablaFahrenheit(lower, upper, increment);
}

int main() {
    PrintTablas();

    return 0;
}
