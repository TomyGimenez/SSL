#include "Conversion.h"

float Celsius(float fahrenheit) {
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

float Fahrenheit(float celsius) {
    return (celsius * 9.0f / 5.0f) + 32.0f;
}
