#include "DarkGDK.h"

//loop to let objects move and importing a sprite
void DarkGDK() {
  int SpriteX = 300;
  int SpriteY = 200;
  dbSetImageColorKey(255, 255, 255);
  dbLoadImage("Square.jpeg", 1);
  //sync rate
  dbSyncOn();
  dbSyncRate(60);

  //loop to give properties to the sprite
  while(LoopGDK()) {
    dbSprite(1, SpriteX, SpriteY, 1);

    //while looping, if up key pressed then move up
    if(dbUpKey()) {
      SpriteY--;
    }
    //while looping, if down key pressed then move down
    if(dbDownKey()) {
      SpriteY++;
    }
    //while looping, if left key pressed then move left
    if(dbLeftKey()) {
      SpriteX--;
    }
    //while looping, if right key pressed then move right
    if(dbRightKey()) {
      SpriteX++;
    }
    //sync
    dbSync();
  }
}
