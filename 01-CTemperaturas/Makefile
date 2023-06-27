CC = gcc
CFLAGS = -std=c99 -Wall

all: conversion

conversion: ConversionTest.o Conversion.o TablasDeConversion.o
	$(CC) $(CFLAGS) -o conversion ConversionTest.o Conversion.o TablasDeConversion.o

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c

clean:
	rm -f *.o conversion

