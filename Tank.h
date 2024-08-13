#ifndef TANK_H
#define TANK_H


  

#include <Arduino.h>
#include "Timer.h"



#define LEFT 1
#define RIGHT 2
#define UP 3
#define DOWN 4

namespace Tank
{

class Tank
{
public:
 
  Tank(int x, int y, byte move, byte imgset, byte maxCannonShells);


  bool moveH(bool revers, bool moveBlocked);
  
 
  bool moveV(bool revers, bool moveBlocked);

  bool setposLock(bool lock);
  int getTankXPosition();
  int getTankYPosition();

  byte getBildSet();
  byte getMovement();
  byte getChainAnimation();
  byte getSize();
  byte getSpeed();
  bool shoot();
  int getCannonStartX();
  int getCannonStartY();
/*
  int borderR;
  int* borderL;
  int* borderU;
  int* borderD;
*/
  // vars
  byte cannon1Count = 0;
  Timer shootTimer = Timer(500);
  bool borderLock = false;

private:
  // methodes

  // variables

  byte speed ;
  byte size = 18;

  int posX;
  int posY;

  byte maxX;
  byte maxY;

  byte chainBild ;
  bool posLocked;
  

  byte movement;

  byte imgSet; // для определения набора текстур
  byte cannonMaxCount ;
};
}
#endif