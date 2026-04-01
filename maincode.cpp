
unsigned long value = 0;
unsigned long currentTime ; int ledState = LOW;
int blink = 0;
int ledPin = 11 ;
void setup()
{
// set the digital pin as output:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
}
void loop()
{
currentTime = millis();
if (currentTime - value >= 1000 && blink == 1)
{
value = currentTime;
if (ledState == LOW)
{
ledState = HIGH;
}
else
{
ledState = LOW;
}
digitalWrite(ledPin, ledState);
}
if(digitalRead(2) == LOW )
{
digitalWrite(ledPin, LOW );
ledPin ++ ;
if ( ledPin >= 14 )
{
ledPin = 11;
}
digitalWrite(ledPin, HIGH );
delay(300);
}
if(digitalRead(3) == LOW )
{
if (blink == 0)
{
blink = 1;
}
else
{
blink = 0;
}
delay(300);
}
}
