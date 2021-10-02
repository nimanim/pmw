#define pin 4
#define pot A0
int val;
int freq;
int cycle;
void setup() {
 pinMode(pin,OUTPUT);
 
}

void loop() {
val = analogRead(pot);
freq = map(val,0,1023,0,20);
cycle = map(val,0,1023,20,0);

digitalWrite(pin,HIGH);
delay(cycle);
digitalWrite(pin,LOW);
delay(freq);

}
