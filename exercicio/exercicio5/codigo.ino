// C++ code
//

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if(digitalRead(2) == HIGH){
    digitalWrite(3, LOW);
  }else{
    digitalWrite(3, HIGH);
  }
}
