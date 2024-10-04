// blinking led
void setup() {
  
  pinMode(9, OUTPUT);
}

void loop() {
  
  digitalWrite(9,HIGH);
  delay(250);
  digitalWrite(9,LOW);
  delay(250);
}

//led button
int const led = 9;
int const button = 2;

int buttonState = 0;
void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  
 buttonState = digitalRead(button);
 if (buttonState == HIGH) 
{
 digitalWrite(led, HIGH);
 } 
else 
{
 digitalWrite(led, LOW);

}
}

//traffic lights
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(12, HIGH);
  digitalWrite(13,LOW);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(1000);
}


