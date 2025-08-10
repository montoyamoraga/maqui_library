/*! \file Maqui.h
 *  \brief Header file  for Maqui.
 *  
 *  Detailed description starts here.
 * \author montoyamoraga
 */

#ifndef MAQUI_H
#define MAQUI_H

#include <Arduino.h>
#include "FrecuenciasMIDI.h"
#include "NotasMIDI.h"
#include "Pantalla12x8.h"

/*! \class Maqui
 *  \brief Class
 *  
 *  Detailed description starts here.
 */
class Maqui {

    protected:
    
        NotasMIDI *notas  = nullptr;
        Pantalla12x8 *pantalla = nullptr;
    
    public:

        /*! \ Maqui
        *  \brief Class
        *  
        *  Detailed description starts here.
        */
        Maqui();

        // destructor
        ~Maqui();

        // constantes
        static const int canalMinimo;
        static const int canalMaximo;

        void iniciar();

        int mostrarCanal();
        void cambiarCanal(int nuevoCanal);

        void enviarMIDINoteOn(int nota, int velocidad);
        void enviarMIDINoteOff(int nota);
        void enviarMIDIControlChange(int control, int valor);

        static int canal;
        static int noteOn;
        static int noteOff;
        static int velocidadCero;

};

#endif