#include <stdio.h>
#include "lib.h"

int main() {
    estados_t estado = Abrir; 
    while (1) {
        switch (estado) {
            case Abrir:
                estado = f_vacio();
                break;

            case Cerrar:
                estado = f_lleno();
                break;

            case Alarma:
                estado = f_alarma();
                break;
        }
    }
    return 0;
}
