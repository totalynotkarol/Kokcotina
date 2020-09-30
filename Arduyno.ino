int buttonState = 0;
const int buttonPin = 2;
int tim = 1000;
int Hod = 0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, LOW);
}

void loop()
{
    while (digitalRead(buttonPin) == HIGH)
    {}
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(4, LOW);
    delay(tim);
    
   while (digitalRead(buttonPin) == HIGH)
   {}
    
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(4, LOW);
    delay(tim);
   
   while (digitalRead(buttonPin) == HIGH)
   {}
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
     delay(tim);
   
    while (digitalRead(buttonPin) == HIGH)
   {}
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(4, HIGH);
    delay(tim);
   
    while (digitalRead(buttonPin) == HIGH)
   {}
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
    delay(tim);
   
    while (digitalRead(buttonPin) == HIGH)
   {}
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(4, HIGH);
    delay(tim); 
}
