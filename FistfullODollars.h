#ifndef _FISTFULLODOLLARS_H
#define _FISTFULLODOLLARS_H
#include <string>
#include "Player.h"

class FistfullODollars : public Player {
   public:
       FistfullODollars();
       std::string performMove();
       void setCtr(int);
       ~FistfullODollars();

   private:
       std::string hand;
       int ctr;
};

#endif
