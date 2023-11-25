#include "lib.h"

estados_t f_lleno(void) {
    int volumen = lectura();
    if (volumen == NIVEL_MAX) {
        return Cerrar;
    }
    return Alarma;
}

estados_t f_vacio(void) {
    int volumen = lectura();
    if (volumen == NIVEL_MIN) {
        return Abrir;
    }
    return Alarma;
}

estados_t f_alarma(void) {
    int volumen = lectura();
    if (volumen > NIVEL_MAX) {
        return Alarma;
    }
    return Alarma;
}
