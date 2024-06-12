#ifndef MAQUI_H
#define MAQUI_H

#include <Arduino.h>

class Maqui {

    int canal;
    
    public: 
        // constructor
        Maqui();

        // destructor
        ~Maqui();

        void cambiarCanal(int nuevoCanal);
};

#endif