#ifndef MAQUI_H
#define MAQUI_H

#include <Arduino.h>
#include "NotasMIDI.h"

class Maqui {

    protected:
    
        NotasMIDI *notas  = nullptr;
    
    public: 

        // constructor
        Maqui();

        // destructor
        ~Maqui();

        void iniciar();

        int mostrarCanal();
        void cambiarCanal(int nuevoCanal);

        // send MIDI Note On message
       void enviarMIDINoteOn(int nota, int velocidad);
       void enviarMIDINoteOff(int nota);

        static int canal;
        static int noteOn;
        static int noteOff;
        static int velocidadCero;


};

#endif