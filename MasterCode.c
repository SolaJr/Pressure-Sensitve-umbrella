/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the
  result to the serial monitor

  This example code is in the public domain.
*/

int buttonState = 0;
int r2, r3, r4, r8; 

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  //pinMode(3, INPUT);
  //pinMode(4, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  r2 = analogRead(A2); 
  //r3 = digitalRead(3);
  //r4 = digitalRead(4);  
  
  int m = r2;//max(max(r2, r3),r4)*20 ;
  
  Serial.println(m);
  if (m >100)
  {
   r8 = HIGH;
  }
  else
  {
    r8 = LOW;
  }
  digitalWrite (8 , r8);  
  delay(10); // Delay a little bit to improve simulation performance
}

