#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();
int note2 = 0;
int note3 = 0;
int note4 = 0;
int note5 = 0;
int note6 = 0;
int note7 = 0;
void setup() {
// put your setup code here, to run once:
MIDI.begin(4);
// 115200 hairless MIDI
Serial.begin(115200);
for(int i = 2;i<8;i++){
pinMode(i,INPUT);
}
}
void loop() {
//Not 1
if (digitalRead(2) == HIGH) {
if (note2 == 0) {
// more info: http://arduinomidilib.sourceforge.net/a00001.html
// MIDI notes chart http://www.phys.unsw.edu.au/jw/notes.html
// play note (note number, velocity, channel)
// 60 = C4 , 127 = trigger note with max volume
MIDI.sendNoteOn(60,127,1);
MIDI.sendNoteOff(62,0,1);
// note is playing
Serial.println("not1");
note2 = 1;
}
} else {
if (note2 == 1) {
MIDI.sendNoteOff(60,0,1);
MIDI.sendNoteOff(62,0,1);
}
note2 = 0;
}
//Not 2
if (digitalRead(3) == HIGH) {
if (note3 == 0) {
MIDI.sendNoteOn(62,127,1);
MIDI.sendNoteOff(64,0,1);
Serial.println("not2");
// note is playing
note3 = 1;
}
} else {
if (note3 == 1) {
MIDI.sendNoteOff(62,0,1);
MIDI.sendNoteOff(64,0,1);
}
note3 = 0;
}
//Not 3
if (digitalRead(4) == HIGH) {
if (note4 == 0) {
MIDI.sendNoteOn(64,127,1);
MIDI.sendNoteOff(67,0,1);
Serial.println("not3");
// note is playing
note4 = 1;
}
} else {
if (note4 == 1) {
MIDI.sendNoteOff(64,0,1);
MIDI.sendNoteOff(67,0,1);
}
note4 = 0;
}
//Not 4
if (digitalRead(5) == HIGH) {
if (note5 == 0) {
MIDI.sendNoteOn(67,127,1);
MIDI.sendNoteOff(69,0,1);
// note is playing
Serial.println("not4");
note5 = 1;
}
} else {
if (note5 == 1) {
MIDI.sendNoteOff(67,0,1);
MIDI.sendNoteOff(69,0,1);
}
note5 = 0;
}
//Not 5
if (digitalRead(6) == HIGH) {
if (note6 == 0) {
MIDI.sendNoteOn(69,127,1);
MIDI.sendNoteOff(72,0,1);
// note is playing
Serial.println("not5");
note6 = 1;
}
} else {
if (note6 == 1) {
MIDI.sendNoteOff(69,0,1);
MIDI.sendNoteOff(72,0,1);
}
note6 = 0;
}
//Not 6
if (digitalRead(7) == HIGH) {
if (note7 == 0) {
MIDI.sendNoteOn(72,127,1);
MIDI.sendNoteOff(60,0,1);
// note is playing
Serial.println("not6");
note7 = 1;
}
} else {
if (note7 == 1) {
MIDI.sendNoteOff(72,0,1);
MIDI.sendNoteOff(60,0,1);
}
note7 = 0;
}
delay(1);
}
