/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
#include "classGallina.h"
#include "classGanso.h"
#include "classPato.h"

int main()
{
    Gallina chicken("Gallina");
    Ganso goose("Ganso");
    Pato duck("Pato");

    chicken.setVolar("Gallina");
    chicken.setPico("Gallina");
    chicken.setcomestible("Gallina");

    goose.setVolar("Ganso");
    goose.setPico("Ganso");
    goose.setcomestible("Ganso");

    duck.setVolar("Pato");
    duck.setPico("Pato");
    duck.setcomestible("Pato");

    return 0;
}
