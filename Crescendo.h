#ifndef _CRESCENDO_H
#define _CRESCENDO_H
#include <string>
#include "Player.h"

class Crescendo : public Player {
   public:
       Crescendo();

       std::string performMove();
       void setCtr(int);
       ~Crescendo();

   private:
       std::string hand;
       int ctr;
};

#endif
