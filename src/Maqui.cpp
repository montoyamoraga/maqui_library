#include "Maqui.h"

int Maqui::canal = 1;

Maqui::Maqui() {
    // constructor
}

Maqui::~Maqui() {
    // destructor
}

void Maqui::cambiarCanal(int nuevoCanal) {
  Maqui::canal = nuevoCanal;
}

int Maqui::mostrarCanal() {
  return Maqui::canal;
}


