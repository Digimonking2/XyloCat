#include "Paw.h"

Paw leftPaw(2,4);
Paw rightPaw(13, 8);
Paw paw[] = {leftPaw, rightPaw};

void setup() {
  // put your setup code here, to run once:
  int leftPositions[] = {0,0,0,0,0,0,0};
  int rightPositions[] = {0,0,0,0,0,0,0};
  paw[0].setup(leftPositions);
  paw[1].setup(rightPositions);

  Serial.begin(9600);
}

void loop() {
  /* Process for loop():
   *  - Read serial (bufferToNote)
   *    - paw[note.whichPaw].goToNote(note);
   */
   paw[1].hammerUp();
   paw[1].setAngle(90);
   paw[1].printPositions();
   delay(1000);
   paw[1].setAngle(60);
   paw[1].printPositions();
   delay(1000);
}
