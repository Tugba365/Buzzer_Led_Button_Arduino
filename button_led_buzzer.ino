int buton= 3;
int led= 1;
int buzzerPin=2;
int butondeger;

void setup(){
pinMode(buton, INPUT);
pinMode(buzzerPin,OUTPUT);
pinMode(led, OUTPUT);
}

void loop(){
  butondeger = digitalRead(buton);
  
if (butondeger == HIGH)
{
digitalWrite(buzzerPin, HIGH);
digitalWrite(led, LOW); }
else
{
digitalWrite(led, HIGH);
digitalWrite(buzzerPin, LOW);
}}
