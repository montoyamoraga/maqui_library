// ex00_sequencer
// by montoyamoraga
// may 2024

// import library
// # include "Maqui.h"

// Maqui maqui;

int canal = 1;
int noteOn = 0x90;
int noteOff = 0x80;

int timeNoteOn = 300;
int timeNoteOff = 50;
int velocidadCero = 0x00;

void setup() {
  Serial1.begin(31250);
}

void loop() {

  for (int nota = 0x50; nota < 0x80; nota++) {

    sendMIDINoteOn(nota, 0x64);
    delay(timeNoteOn);

    sendMIDINoteOff(nota);
    delay(timeNoteOff);
  }
}

// send MIDI Note On message
void sendMIDINoteOn(int nota, int velocidad) {
  Serial1.write(noteOn);
  Serial1.write(nota);
  Serial1.write(velocidad);
}

void sendMIDINoteOff(int nota) {
  Serial1.write(noteOff);
  Serial1.write(nota);
  Serial1.write(velocidadCero);
}
