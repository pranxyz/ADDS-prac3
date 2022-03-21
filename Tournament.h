#ifndef _TOURNAMENT_H
#define _TOURNAMENT_H
#include <string>
#include <vector>
#include "Player.h"

class Tournament {
   public:
   
Player * run(array<Player *, 8>  competitors)

       Tournament();
       void addPlayers(Player*);
       std::string compete();
       ~Tournament();

   private:
       std::vector<Player*> Round1;
       std::vector<Player*> Round2;
       std::vector<Player*> Round3;

};

#endif
