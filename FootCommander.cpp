#include <string>
#include <vector>
#include <stdexcept>
#include "FootCommander.hpp"
#include <iostream>

using namespace std;
void FootCommander::sdHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location){
        int  i = 0;
        while ( i < s.size()){
        for (int j = 0; j < s.size(); j++){
        if(s[i][j]!=nullptr&&s[location.first][location.second]->numOfplayer==s[i][j]->numOfplayer&&s[i][j]->name=="Foot Soldier"){
              s[i][j]->dHilSol(s,{i,j});     
        }
        
         }
         i++;
      }


}