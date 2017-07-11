
//BUTTONS
const int rButton = 2;
const int gButton = 3;
const int bButton = 4;
const int modeButton = 5;
//LEDS
const int redLed = 9;
const int greenLed = 10;
const int blueLed = 11;

int rState = 0;
int gState = 0;
int bState = 0;

void setup() {
   pinMode(rButton, INPUT);
   pinMode(gButton, INPUT);
   pinMode(bButton, INPUT); 
   pinMode(modeButton, INPUT);
}

void loop() {
 rState = digitalRead(rButton);
 gState = digitalRead(gButton);
 bState = digitalRead(bButton);

  if(rState){
     rButton = !rButton
  }   
}
