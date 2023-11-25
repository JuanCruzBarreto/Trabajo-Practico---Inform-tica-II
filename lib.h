#ifndef LIB_H
#define LIB_H

#define NIVEL_MIN 25
#define NIVEL_MAX 95

#include <stdio.h>

typedef enum {
    Abrir = 1,
    Cerrar = 0,
    Alarma = 2
} estados_t;

estados_t f_lleno(void);
estados_t f_vacio(void);
estados_t f_alarma(void);
int lectura(void);

#endif
