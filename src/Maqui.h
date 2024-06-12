#ifndef MAQUI_H
#define MAQUI_H

#include <Arduino.h>
#include "NotasMIDI.h"

class Maqui {
    
    public: 
        // constructor
        Maqui();

        // destructor
        ~Maqui();

        void cambiarCanal(int nuevoCanal);

        static int canal;
};

#endif