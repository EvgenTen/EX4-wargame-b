#include <string>
#include <vector>
#include <stdexcept>
#include "Paramedic.hpp"
#include <iostream>

using namespace std;

 
 void Paramedic::dHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location) {
  int  i = 0;
  while (i < s.size()){
    for (int j = 0; j < s.size(); j++){
     if(s[i][j]!=nullptr&&s[location.first][location.second]->numOfplayer==s[i][j]->numOfplayer&&s[i][j]&&Disb(location.first,location.second,i,j)==1){ 
     s[i][j]->uhp();
     

     }
     }
     i++;
     }

if(s[location.first][location.second]->name=="Paramedic Commander") s[location.first][location.second]->sdHilSol(s, {location.first,location.second});


 }