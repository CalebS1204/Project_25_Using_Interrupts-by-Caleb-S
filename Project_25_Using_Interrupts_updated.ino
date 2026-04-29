// Project 25 – Using Interrupts

#define LED 13
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displayMicros, RISING);
  attachInterrupt(1, displayMillis, RISING);  
}
 void displayMicros()
{
  Serial.println(":)");
 // Serial.println(micros());
}

 void displayMillis()
{
  Serial.println(":(");
//Serial.println(millis());
}
 void loop()
{
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
