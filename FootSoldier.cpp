#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"
#include <iostream>
#include<float.h>
#include <cmath>
using namespace std;
 

pair<int ,int > FootSoldier:: cLocation(vector<vector<Soldier*>>&s,pair<int,int> location ) {
double min=__DBL_MAX__;
pair<int ,int > distneiton;
int  i = 0;
while (i < s.size()){
for (int j = 0; j < s[0].size(); j++){
if(s[i][j]!=nullptr&&s[location.first][location.second]->numOfplayer!=s[i][j]->numOfplayer&&min>s[i][j]->Disb( location.first, location.second , i, j)){
min=s[i][j]->Disb( location.first, location.second , i, j);
distneiton={i,j};

}
}
i++;
}

return distneiton;
};
 
 
 
 void FootSoldier::dHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location) {
pair<int ,int > distneiton_Attak=cLocation(s,{location.first,location.second});
s[distneiton_Attak.first][distneiton_Attak.second]->life-=s[location.first][location.second]->attack;

if(s[distneiton_Attak.first][distneiton_Attak.second]->life<=0){
    delete s[distneiton_Attak.first][distneiton_Attak.second];
    s[distneiton_Attak.first][distneiton_Attak.second]=nullptr;
}

if(s[location.first][location.second]->name=="Foot Commander") s[location.first][location.second]->sdHilSol(s, {location.first,location.second});


      


 };