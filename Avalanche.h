#ifndef _AVALANCHE_H
#define _AVALANCHE_H
#include "Player.h"
#include <string>

class Avalanche : public Player {
   public:
       Avalanche();
       std::string performMove();
       ~Avalanche();

   private:
       std::string hand;

};

#endif
