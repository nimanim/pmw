
/*
code by nima._.nim

Github: https://github.com/nimanim
Instagram: https://instagram.com/nima._.nim/
Telegram: @nima_nim_tl
Discord: NIMA_NIM#8760

date: 10/2/2021
*/
#define pinOut 13
#define POT A0

int pinState = Low;
unsigned long lasMillis = 0;
float time;
float time2;

void setup() {
    
    pinMode(pinOut,OUTPUT);


}

void loop(){
    
    unsigned long currentMillis = millis();
    
    time = map(analogRead(POT),0,1023,0,20);
    time2 = 20 - time;

if (pinState == LOW){
    if (currentMillis - lastMillis >= time){
        lastMillis = currentMillis;

        digitalWrite(pinOut,HIGH);
        pinState = HIGH;
    }
}

else if(pinState == HIGH){
    if currentMillis - lastMillis >= time2){
        lastMillis = currentMillis;

        digitalWrite(pinOut,LOW);
        pinState = LOW;
    }
}
}