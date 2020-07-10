/*
LIBARY for GPIOs
Datei: gpio.h
 */
#ifndef GPIO_H
#define GPIO_H

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define IN  0
#define OUT 1

#define LOW  0
#define HIGH 1

// Reserviert GPIO für Zugriff
int export_pin(int pin);

// Gibt GPIO frei
int unexport_pin(int pin);

// GPIO kann als OUT oder IN geschaltet werden
int pin_mode(int pin, int dir);

// Liest GPIO aus und ermittelt INT - Wert
int pin_read_value(int pin);

// Schreibt auf GPIO INT - Wert
int pin_write_value(int pin, int value);


#endif
