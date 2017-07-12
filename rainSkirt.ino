
//BUTTONS
const int rButton = 2;
const int gButton = 3;
const int bButton = 4;
const int modeButton = 5;
//LEDS
const int rLed = 9;
const int gLed = 10;
const int bLed = 11;

int rState = 0;
int gState = 0;
int bState = 0;

int mode = 1;

void setup() {
   pinMode(rButton, INPUT);
   pinMode(gButton, INPUT);
   pinMode(bButton, INPUT); 
   pinMode(modeButton, INPUT);

   pinMode(rLed, OUTPUT);
   pinMode(gLed, OUTPUT);
   pinMode(bLed, OUTPUT);
}

void loop() {
 rState = digitalRead(rButton);
 gState = digitalRead(gButton);
 bState = digitalRead(bButton);

  if(rState){
     digitalWrite(rLed, !digitalRead(rLed));
  }   
  if(gState){
     digitalWrite(gLed, !digitalRead(gLed));
  }   
  if(bState){
     digitalWrite(bLed, !digitalRead(bLed));
  }   
}
