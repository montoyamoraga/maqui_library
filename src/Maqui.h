#ifndef MAQUI_H
#define MAQUI_H

#include <Arduino.h>
#include "FrecuenciasMIDI.h"
#include "NotasMIDI.h"
#include "Pantalla12x8.h"

class Maqui {

    protected:
    
        NotasMIDI *notas  = nullptr;
        Pantalla12x8 *pantalla = nullptr;
    
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
       void enviarMIDIControlChange(int control, int valor);

        static int canal;
        static int noteOn;
        static int noteOff;
        static int velocidadCero;


};

#endif