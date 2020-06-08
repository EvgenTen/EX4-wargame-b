#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"


class FootCommander:public FootSoldier
{
public:
    FootCommander(int numOfplayer ):FootSoldier(150,20,numOfplayer,"Foot Commander"){};
    void dHilSol(vector<vector<Soldier*>>&s,int i,int j )const;
    void sdHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location)override;

     ~FootCommander(){};
};





