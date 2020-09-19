int two_taka_motor=3,five_taka_motor=4;
int two_taka_sensor=5,five_taka_sensor=6;
int two=A0,five=A1;
void setup() 
{
  pinMode(two_taka_motor,OUTPUT);
  pinMode(five_taka_motor,OUTPUT);
  pinMode(two_taka_sensor,INPUT_PULLUP);
  pinMode(five_taka_sensor,INPUT_PULLUP);
  pinMode(two,INPUT_PULLUP);
  pinMode(five,INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(two)==LOW)
  {
    while(digitalRead(two)==LOW);
    digitalWrite(two_taka_motor,HIGH);
    while(digitalRead(two_taka_sensor)==HIGH);
    digitalWrite(two_taka_motor,LOW);
  }
  if(digitalRead(five)==LOW)
  {
    while(digitalRead(five)==LOW);
    digitalWrite(five_taka_motor,HIGH);
    while(digitalRead(five_taka_sensor)==HIGH);
    digitalWrite(five_taka_motor,LOW);
  }
}
