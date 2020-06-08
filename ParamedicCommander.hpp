
#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Paramedic.hpp"
class ParamedicCommander:public Paramedic
{
public:
   
    ParamedicCommander(int numOfplayer ):Paramedic(200,0,numOfplayer,"Paramedic Commander"){};
    void dHilSol(vector<vector<Soldier*>>&s,int i,int j )const;
    void sdHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location)override;
     ~ParamedicCommander(){};
};