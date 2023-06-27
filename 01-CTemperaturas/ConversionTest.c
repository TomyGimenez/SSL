#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

void testConversion(float (*conversion)(float), const char* conversionName, float input, float salidaEsperada) {
    float salida = conversion(input);
    assert(salida == salidaEsperada);
    printf("%s: %.2f -> %.2f\n", conversionName, input, salida);
}

int testMain() {
    testConversion(Celsius, "De Fahrenheit a Celsius", 32.0f, 0.0f);
    testConversion(Celsius, "De Fahrenheit a Celsius", 212.0f, 100.0f);
    testConversion(Celsius, "De Fahrenheit a Celsius", 98.6f, 37.0f);

    testConversion(Fahrenheit, "De Celsius a Fahrenheit", 0.0f, 32.0f);
    testConversion(Fahrenheit, "De Celsius a Fahrenheit", 100.0f, 212.0f);
    testConversion(Fahrenheit, "De Celsius a Fahrenheit", 37.0f, 98.6f);

    return 0;
}