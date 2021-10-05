// C++ code
// Ashwin Ragupathy
// R3 - Training Task 1 - Software
// Due: OCtober 10, 2021
//
// Map the input of a potentiometer of 0 - 1023 to 0 - 99 and
// display the values on two Seven Segment displays using CD4511
// seven segment decoders
//

int potentiometerPin = 0;   // Initialize the analog input of the potentiometer to A0
int position = 0;           // The obtained position of the potentiometer
int mappedPosition = 0;     // The mapped position of the potentiometer
int mappedPositionTens = 0; // The tens place value of the mapped position
int mappedPositionOnes = 0; // The ones place value of the mapped position


int tensValueBit1 = 4;     // Initialize the first binary bit (ordered right to left) of the tens place value to digital pin 4
int tensValueBit2 = 5;     // Initialize the second binary bit of the tens place value to digital pin 5
int tensValueBit3 = 6;     // Initialize the third binary bit of the tens place value to digital pin 6
int tensValueBit4 = 7;     // Initialize the fourth binary bit of the tens place value to digital pin 7

int onesValueBit1 = 8;     // Initialize the first binary bit (ordered right to left) of the ones place value to digital pin 8
int onesValueBit2 = 9;     // Initialize the second binary bit of the ones place value to digital pin 9
int onesValueBit3 = 10;    // Initialize the third binary bit of the ones place value to digital pin 10
int onesValueBit4 = 11;    // Initialize the fourth binary bit of the ones place value to digital pin 11

void setup()
{
  pinMode(4, OUTPUT);       // Sets digital pin 4 as an output
  pinMode(5, OUTPUT);       // Sets digital pin 5 as an output
  pinMode(6, OUTPUT);       // Sets digital pin 6 as an output
  pinMode(7, OUTPUT);       // Sets digital pin 7 as an output
  pinMode(8, OUTPUT);       // Sets digital pin 8 as an output
  pinMode(9, OUTPUT);       // Sets digital pin 9 as an output
  pinMode(10, OUTPUT);      // Sets digital pin 10 as an output
  pinMode(11, OUTPUT);      // Sets digital pin 11 as an output

}

void loop()
{

  position = analogRead(potentiometerPin);          // Obtain the position of the potentiometer by reading the value from the potentiometer pin
  mappedPosition = map(position, 0, 1023, 0, 99);   // Map the position from 0-1023 to 0-99

  mappedPositionTens = mappedPosition / 10;         // Find the tens place value of the mapped position
  mappedPositionOnes = mappedPosition % 10;         // Find the ones place value of the mapped position

  // Writing to the tens value seven segment display
  if (mappedPositionTens == 1) {                    // If tens value is 1 then set binary tens value as 0001 by writing to the individual bits
    digitalWrite(tensValueBit1, 1);
    digitalWrite(tensValueBit2, 0);
    digitalWrite(tensValueBit3, 0);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 2) {                    // If tens value is 2 then set binary tens value as 0010 by writing to the individual bits
    digitalWrite(tensValueBit1, 0);
    digitalWrite(tensValueBit2, 1);
    digitalWrite(tensValueBit3, 0);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 3) {                    // If tens value is 3 then set binary tens value as 0011 by writing to the individual bits
    digitalWrite(tensValueBit1, 1);
    digitalWrite(tensValueBit2, 1);
    digitalWrite(tensValueBit3, 0);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 4) {                    // If tens value is 4 then set binary tens value as 0100 by writing to the individual bits
    digitalWrite(tensValueBit1, 0);
    digitalWrite(tensValueBit2, 0);
    digitalWrite(tensValueBit3, 1);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 5) {                    // If tens value is 5 then set binary tens value as 0101 by writing to the individual bits
    digitalWrite(tensValueBit1, 1);
    digitalWrite(tensValueBit2, 0);
    digitalWrite(tensValueBit3, 1);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 6) {                    // If tens value is 6 then set binary tens value as 0110 by writing to the individual bits
    digitalWrite(tensValueBit1, 0);
    digitalWrite(tensValueBit2, 1);
    digitalWrite(tensValueBit3, 1);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 7) {                    // If tens value is 7 then set binary tens value as 0111 by writing to the individual bits
    digitalWrite(tensValueBit1, 1);
    digitalWrite(tensValueBit2, 1);
    digitalWrite(tensValueBit3, 1);
    digitalWrite(tensValueBit4, 0);
  }
  if (mappedPositionTens == 8) {                    // If tens value is 8 then set binary tens value as 1000 by writing to the individual bits
    digitalWrite(tensValueBit1, 0);
    digitalWrite(tensValueBit2, 0);
    digitalWrite(tensValueBit3, 0);
    digitalWrite(tensValueBit4, 1);
  }
  if (mappedPositionTens == 9) {                    // If tens value is 9 then set binary tens value as 1001 by writing to the individual bits
    digitalWrite(tensValueBit1, 1);
    digitalWrite(tensValueBit2, 0);
    digitalWrite(tensValueBit3, 0);
    digitalWrite(tensValueBit4, 1);
  }
  if (mappedPositionTens == 0) {                    // If tens value is 0 then set binary tens value as 0000 by writing to the individual bits
    digitalWrite(tensValueBit1, 0);
    digitalWrite(tensValueBit2, 0);
    digitalWrite(tensValueBit3, 0);
    digitalWrite(tensValueBit4, 0);
  }

  // Writing to the ones value seven segment display
  if (mappedPositionOnes == 1) {                     // If ones value is 1 then set binary tens value as 0001 by writing to the individual bits
    digitalWrite(onesValueBit1, 1);
    digitalWrite(onesValueBit2, 0);
    digitalWrite(onesValueBit3, 0);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 2) {                     // If ones value is 2 then set binary tens value as 0010 by writing to the individual bits
    digitalWrite(onesValueBit1, 0);
    digitalWrite(onesValueBit2, 1);
    digitalWrite(onesValueBit3, 0);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 3) {                     // If ones value is 3 then set binary tens value as 0011 by writing to the individual bits
    digitalWrite(onesValueBit1, 1);
    digitalWrite(onesValueBit2, 1);
    digitalWrite(onesValueBit3, 0);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 4) {                     // If ones value is 4 then set binary tens value as 0100 by writing to the individual bits
    digitalWrite(onesValueBit1, 0);
    digitalWrite(onesValueBit2, 0);
    digitalWrite(onesValueBit3, 1);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 5) {                     // If ones value is 5 then set binary tens value as 0101 by writing to the individual bits
    digitalWrite(onesValueBit1, 1);
    digitalWrite(onesValueBit2, 0);
    digitalWrite(onesValueBit3, 1);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 6) {                     // If ones value is 6 then set binary tens value as 0110 by writing to the individual bits
    digitalWrite(onesValueBit1, 0);
    digitalWrite(onesValueBit2, 1);
    digitalWrite(onesValueBit3, 1);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 7) {                     // If ones value is 7 then set binary tens value as 0111 by writing to the individual bits
    digitalWrite(onesValueBit1, 1);
    digitalWrite(onesValueBit2, 1);
    digitalWrite(onesValueBit3, 1);
    digitalWrite(onesValueBit4, 0);
  }
  if (mappedPositionOnes == 8) {                     // If ones value is 8 then set binary tens value as 1000 by writing to the individual bits
    digitalWrite(onesValueBit1, 0);
    digitalWrite(onesValueBit2, 0);
    digitalWrite(onesValueBit3, 0);
    digitalWrite(onesValueBit4, 1);
  }
  if (mappedPositionOnes == 9) {                     // If ones value is 9 then set binary tens value as 1001 by writing to the individual bits
    digitalWrite(onesValueBit1, 1);
    digitalWrite(onesValueBit2, 0);
    digitalWrite(onesValueBit3, 0);
    digitalWrite(onesValueBit4, 1);
  }
  if (mappedPositionOnes == 0) {                     // If ones value is 0 then set binary tens value as 0000 by writing to the individual bits
    digitalWrite(onesValueBit1, 0);
    digitalWrite(onesValueBit2, 0);
    digitalWrite(onesValueBit3, 0);
    digitalWrite(onesValueBit4, 0);
  }

}