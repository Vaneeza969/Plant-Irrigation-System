#define led 13

void setup()
{
pinMode(13,OUTPUT);
pinMode (2, OUTPUT);
}
void loop()
{
  digitalWrite (13, HIGH);
  delay(1000);
  digitalWrite (13, LOW);
  delay(1000);
   digitalWrite (2, HIGH);
  delay(1000);
  digitalWrite (2, LOW);
  delay(1000);
}
