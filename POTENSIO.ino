int led = D5;
int pot = A0;
int val = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
pinMode (led, OUTPUT);
pinMode (pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead (pot);
Serial.println (val);
delay (1000); 
int ledLevel = map (val, 300, 900, 0, 255);
analogWrite (led, ledLevel);
}
