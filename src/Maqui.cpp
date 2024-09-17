#include "Maqui.h"

int Maqui::canal = 1;
int Maqui::noteOn = 0x90;
int Maqui::noteOff = 0x80;
int Maqui::velocidadCero = 0x00;


Maqui::Maqui() {
    notas = new NotasMIDI();
    pantalla = new Pantalla12x8();
}



Maqui::~Maqui() {
    // destructor
    if (notas != nullptr) {
        delete notas;
    }
    if (pantalla != nullptr) {
        delete pantalla;
    }
}

void Maqui::iniciar() {
  Serial1.begin(notas->velocidadSerial);
}

void Maqui::cambiarCanal(int nuevoCanal) {
  Maqui::canal = nuevoCanal;
}

int Maqui::mostrarCanal() {
  return Maqui::canal;
}

// send MIDI Note On message
void Maqui::enviarMIDINoteOn(int nota, int velocidad) {
  Serial1.write(noteOn);
  Serial1.write(nota);
  Serial1.write(velocidad);
}

void Maqui::enviarMIDINoteOff(int nota) {
  Serial1.write(noteOff);
  Serial1.write(nota);
  Serial1.write(velocidadCero);
}

void Maqui::enviarMIDIControlChange(int control, int valor) {
  // Serial1.write();
  Serial1.write(control);
  Serial1.write(valor);
}

