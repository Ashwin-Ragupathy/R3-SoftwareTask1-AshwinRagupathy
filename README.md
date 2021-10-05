# R3-SoftwareTask1-AshwinRagupathy
 Task:
 Map the input of a potentiometer of 0-1023 to 0-99 and display the values on two Seven Segment displays using CD4511 seven segment decoders.

 My project works by having the potentiometer provide its input (position/resistance value) to the analog input pin "A0" as the variable "position". 
 This input, received by the Arduino, is then mapped to a value range of 0-99 from the value range of 0-1023 using the map function. The map function 
 allows me to enter a value and two ranges, of which the value is mapped from one to the other. In this case the values are the variable "position" 
 obtained from the potentiometer and the range of the potentiometer 0-1023 is mapped to 0-99 so it can be displayed on the seven-segment displays. 
 The mapped value of the position is stored to the variable mappedPosition.

 To be displayed on the seven-segment displays however, the value of mappedPosition must be separated into its place values. This is stored as 
 mappedPositionTens and mappedPositionOnes for the tens and ones place values respectively. This is done by diving the mappedPosition value by 
 10 to get the tens value and finding the modulus/remainder of dividing the mappedPosition value by 10 to get the ones value.

 The seven-segment displays are common cathode displays and connected to a seven-segment decoder (CD4511). The decoder connects by matching the pins a-g 
 with pins a-g and the common pin on the displays is connected to a 220-ohm resistor. This is the same for both seven-segment displays. The decoders vary 
 in connection to the Arduino, with the tens digit decoder's D0-D3 connected to digital pins 4-7 on the Arduino and comparatively the ones digit decoder's 
 D0-D3 connected to digital pins 8-11 on the Arduino. Both decoders have "blanking" and "lamp test" set to high and "latch enable" set to low so that they 
 operate normally. All the components rely on the Arduino for power and ground.

 To output the values of the mappedPositionTens and mappedPositionOnes via digital pins 4-7 and 8-11, the values are converted to binary and output in 
 variables, tensValueBit1...4 and onesValueBit1...4 all respectively. To convert the values into binary, if statements are used for values 0-9 and to find 
 their equivalent output bits from right to left for both displays. This is then written to the individual bit values as a 0 or 1 depending on the 
 mappedPositionTens/Ones decimal value.

 Link to the TinkerCAD project: https://www.tinkercad.com/things/aKWrZbmen0S
