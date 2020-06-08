#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"


class Sniper: public Soldier
{
public:
    Sniper(int numOfplayer ):Soldier(100,50,numOfplayer,"Sniper"){};
    Sniper(int life,int attak ,int numOfplayer,string name):Soldier(life,attak,numOfplayer,name){};
    void dHilSol(vector<vector<Soldier*>>&s,pair<int,int> location)override;
    void sdHilSol(vector<vector<Soldier*>>&s,pair<int,int> location)override{};
    pair<int ,int >elocation(vector<vector<Soldier*>>&s,pair<int,int> location);

     ~Sniper(){};

};


