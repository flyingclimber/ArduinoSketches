int POT = 1;

void setup() {

  Serial.begin(9600);
  pinMode(POT,INPUT);
  
}

void loop() {
  int pot = 0;
  pot = analogRead(POT);
  Serial.print("pot: ");
  Serial.println( pot, DEC );

  delay(100);
}
