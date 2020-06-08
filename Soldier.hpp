#pragma once
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

 class Soldier
{
public:
const int hp;
public:
int life;
int attack;
int numOfplayer ;
string name;
Soldier( const int life=0, const int attack=0, const int numOfplayer=0, const string name="Soldier"):life(life),attack(attack),numOfplayer(numOfplayer),name(name),hp(life){};
void uhp(){life=hp;}
double Disb(int a,int b,int i,int j){return sqrt(pow(abs(a-i),2)+pow(abs(b-j),2));};
virtual void dHilSol(vector<vector<Soldier*>>&s,pair<int,int> location){};
virtual void sdHilSol(vector<vector<Soldier*>>&s,pair<int,int> location){};
virtual~Soldier(){};

};
