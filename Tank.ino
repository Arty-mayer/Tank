#include "Game.h"
#define OLED_RESET -1
// #define SCREEN_ADDRESS 0x3C
#include <MemoryFree.h>

// Adafruit_SSD1306 display(128,64,&Wire,OLED_RESET);

#define OLED_MOSI 9
#define OLED_CLK 10
#define OLED_DC 11
#define OLED_CS 12
#define OLED_RESET 13

Button btn_lt = Button(2, true);
Button btn_rt = Button(5, true);
Button btn_dn = Button(3, true);
Button btn_up = Button(4, true);
Button btn_st = Button(6, true);

Adafruit_SSD1306 display(128, 64, OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

using Tank::Game;

Game *game;
void setup()
{

  Serial.begin(115200);
  Serial.println("start");
  displayInit();
  display.clearDisplay();
  game = new Game();
}

bool displayInit()
{
  if (!display.begin(SSD1306_SWITCHCAPVCC)) //,SCREEN_ADDRESS))
  {
    delay(100);
    displayInit();
    display.clearDisplay();
    display.display();
  }
  else
  {
    return true;
  }
  return false;
}

void loop()
{
  game->mainLoop();
}
