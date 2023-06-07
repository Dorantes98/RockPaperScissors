#include <Adafruit_CircuitPlayground.h>

int button1 = 4;
int button2 = 5;
int switchPin = 7;

volatile bool button1Flag = 0;
volatile bool button2Flag = 0;
volatile bool switchState = 0;
volatile bool switchFlag = 0; 

volatile int player1Control = 0;
volatile int player2Control = 0;
volatile int j = 0;
volatile int i = 0;
int limiter=1;
void setup() {
  CircuitPlayground.begin();

  pinMode(switchPin, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLDOWN);
  pinMode(button2, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(7), onOff, CHANGE);
  attachInterrupt(digitalPinToInterrupt(4), player1, FALLING);
  attachInterrupt(digitalPinToInterrupt(5), player2, FALLING);
}

void loop() {

if(button1Flag){      //if button1 pressed, light up player 1 side in order neo pixels 0-4
  CircuitPlayground.clearPixels();
  player1Control = j++;
  if(player1Control>5){
    j = 0;
  }
  button1Flag = 0;
  }

  if(switchFlag){
    CircuitPlayground.clearPixels();
    switchState = digitalRead(switchPin);
    switchFlag = 0;
  }

if(button2Flag){      //if button1 pressed, light up player 2 side in order neo pixels 0-4
  CircuitPlayground.clearPixels();
  player2Control = i++;
  if(player2Control>5){
    i = 0;
  }
  button2Flag = 0;
  }

if(switchState){
  player1Control = 0;
  player2Control = 0;
  limiter=1;

}
  switch(player1Control)
{
  case 0:
  CircuitPlayground.setPixelColor(9, 0, 0, 0);
  CircuitPlayground.setPixelColor(8, 0, 0, 0);
  CircuitPlayground.setPixelColor(7, 0, 0, 0);
  CircuitPlayground.setPixelColor(6, 0, 0, 0);
  CircuitPlayground.setPixelColor(5, 0, 0, 0);
  break;
  case 1:
    neoPixel0();
    break;
  case 2:
    neoPixel1();
    break;
  case 3:
    neoPixel2();
    break;
  case 4:
    neoPixel3();
    break;
  case 5:
    neoPixel4();
    break;
  case 6:
    coloredSparkle(10);
    break;
  default:
    break;
}

  switch(player2Control)
{
  case 0:
  CircuitPlayground.setPixelColor(0, 0, 0, 0);
  CircuitPlayground.setPixelColor(1, 0, 0, 0);
  CircuitPlayground.setPixelColor(2, 0, 0, 0);
  CircuitPlayground.setPixelColor(3, 0, 0, 0);
  CircuitPlayground.setPixelColor(4, 0, 0, 0);
    break;
  case 1:
    neoPixel9();
    break;
  case 2:
    neoPixel8();
    break;
  case 3:
    neoPixel7();
    break;
  case 4:
    neoPixel6();
    break;
  case 5:
    neoPixel5();
    break;
  case 6:
    coloredSparkle2(10);
    break;
  default:
    break;
}

  }
  

// if(button2Flag){      //if button1 pressed, light up player 2 side in order neo pixels 0-4
//   CircuitPlayground.clearPixels();
//   player2Control = i++;
//   if(player2Control>4){
//     i = 0;
//   }
//   button2Flag = 0;
//   }

// if(switchState){
//   switch(player2Control)
// {
//   case 0:
//     neoPixel9();
//     break;
//   case 1:
//     neoPixel8();
//     break;
//   case 2:
//     neoPixel7();
//     break;
//   case 3:
//     neoPixel6();
//     break;
//   case 4:
//     neoPixel5();
//     break;
//   case 5:
//     coloredSparkle2(10);
//     break;
//   default:
//     break;
// }
//   }

//}

//Player1 neopixels
void neoPixel0(){
  CircuitPlayground.setPixelColor(0, 0, 0, 255);
}

void neoPixel1(){
  CircuitPlayground.setPixelColor(0, 0, 0, 255);
  CircuitPlayground.setPixelColor(1, 0, 0, 255);
}

void neoPixel2(){
  CircuitPlayground.setPixelColor(0, 0, 0, 255);
  CircuitPlayground.setPixelColor(1, 0, 0, 255);
  CircuitPlayground.setPixelColor(2, 0, 0, 255);
}

void neoPixel3(){
  CircuitPlayground.setPixelColor(0, 0, 0, 255);
  CircuitPlayground.setPixelColor(1, 0, 0, 255);
  CircuitPlayground.setPixelColor(2, 0, 0, 255);
  CircuitPlayground.setPixelColor(3, 0, 0, 255);
}

void neoPixel4(){
  CircuitPlayground.setPixelColor(0, 0, 0, 255);
  CircuitPlayground.setPixelColor(1, 0, 0, 255);
  CircuitPlayground.setPixelColor(2, 0, 0, 255);
  CircuitPlayground.setPixelColor(3, 0, 0, 255);
  CircuitPlayground.setPixelColor(4, 0, 0, 255);
}

//Player 2 neopixels
void neoPixel9(){
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
}

void neoPixel8(){
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
  CircuitPlayground.setPixelColor(8, 255, 255, 255);
}

void neoPixel7(){
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
  CircuitPlayground.setPixelColor(8, 255, 255, 255);
  CircuitPlayground.setPixelColor(7, 255, 255, 255);
}

void neoPixel6(){
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
  CircuitPlayground.setPixelColor(8, 255, 255, 255);
  CircuitPlayground.setPixelColor(7, 255, 255, 255);
  CircuitPlayground.setPixelColor(6, 255, 255, 255);
}

void neoPixel5(){
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
  CircuitPlayground.setPixelColor(8, 255, 255, 255);
  CircuitPlayground.setPixelColor(7, 255, 255, 255);
  CircuitPlayground.setPixelColor(6, 255, 255, 255);
  CircuitPlayground.setPixelColor(5, 255, 255, 255);
}

//Player 1 Wint
void coloredSparkle(int flashTime){
  int LED_num = random(0,5);
  CircuitPlayground.setPixelColor(LED_num, 0, 0, 255);
  delay(flashTime/2);
  CircuitPlayground.setPixelColor(LED_num, 0, 0, 0);
  delay(flashTime/2);

if(i=5){
  if (limiter==1){
  player2Control=-1;
  CircuitPlayground.setPixelColor(9, 0, 0, 0);
  CircuitPlayground.setPixelColor(8, 0, 0, 0);
  CircuitPlayground.setPixelColor(7, 0, 0, 0);
  CircuitPlayground.setPixelColor(6, 0, 0, 0);
  CircuitPlayground.setPixelColor(5, 0, 0, 0);
  limiter=0;
  }
  CircuitPlayground.setPixelColor(9, 255, 0, 0);
  CircuitPlayground.setPixelColor(8, 255, 0, 0);
  CircuitPlayground.setPixelColor(7, 255, 0, 0);
  CircuitPlayground.setPixelColor(6, 255, 0, 0);
  CircuitPlayground.setPixelColor(5, 255, 0, 0);
}
}

//Player 2 Win
void coloredSparkle2(int flashTime){
  int LED_num = random(5, 10);
  CircuitPlayground.setPixelColor(LED_num, 255, 255, 255);
  delay(flashTime/2);
  CircuitPlayground.setPixelColor(LED_num, 0, 0, 0);
  delay(flashTime/2);
if(i=5){
  if (limiter==1){
  player1Control=-1;
  CircuitPlayground.setPixelColor(0, 0, 0, 0);
  CircuitPlayground.setPixelColor(1, 0, 0, 0);
  CircuitPlayground.setPixelColor(2, 0, 0, 0);
  CircuitPlayground.setPixelColor(3, 0, 0, 0);
  CircuitPlayground.setPixelColor(4, 0, 0, 0);
  limiter=0;
  }
  CircuitPlayground.setPixelColor(0, 255, 0, 0);
  CircuitPlayground.setPixelColor(1, 255, 0, 0);
  CircuitPlayground.setPixelColor(2, 255, 0, 0);
  CircuitPlayground.setPixelColor(3, 255, 0, 0);
  CircuitPlayground.setPixelColor(4, 255, 0, 0);
}
}

void onOff(){
  switchFlag = 1;
}

void player1(){
  button1Flag = 1;
}

void player2(){
  button2Flag = 1;
}