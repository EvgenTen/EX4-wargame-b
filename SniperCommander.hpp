#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Sniper.hpp"
class SniperCommander:public Sniper
{
public:
    SniperCommander(int numOfplayer ):Sniper(120,100,numOfplayer,"Sniper Commander"){};
    void dHilSol(vector<vector<Soldier*>>&s,int i,int j )const;
    void sdHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location)override;
     ~SniperCommander(){};
};

