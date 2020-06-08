#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"


class FootSoldier: public Soldier
{
public:
    
     FootSoldier(int numOfplayer ):Soldier(100,10,numOfplayer,"Foot Soldier"){};
     FootSoldier(int life,int attak ,int numOfplayer,string name):Soldier(life,attak,numOfplayer,name){};
      void dHilSol(vector<vector<Soldier*>>&s,pair<int,int> location)override;
      void sdHilSol(vector<vector<Soldier*>>&s,pair<int,int> location)override{};      
      pair<int ,int >cLocation(vector<vector<Soldier*>>&s,pair<int,int> location);

     ~FootSoldier(){};

};


