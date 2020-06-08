#include <string>
#include <vector>
#include <stdexcept>
#include "Sniper.hpp"
#include <iostream>

using namespace std;
 pair<int ,int > Sniper:: elocation(vector<vector<Soldier*>>&s,pair<int,int> location ) {
double max=0;
pair<int ,int > distneiton;
int i=0;
while(i < s.size()){
for (int j = 0; j < s[0].size(); j++){
if(s[i][j]!=nullptr&&s[location.first][location.second]->numOfplayer!=s[i][j]->numOfplayer&&max<s[i][j]->life){
max=s[i][j]->life;
distneiton={i,j};
}
}
i++;
}

return distneiton;
};
 
 void Sniper::dHilSol(vector<vector<Soldier*>>&s,pair<int ,int > location) {
pair<int ,int > distneiton_Attak=elocation(s,{location.first,location.second});
cout<<distneiton_Attak.first<<distneiton_Attak.second<<endl;

s[distneiton_Attak.first][distneiton_Attak.second]->life-=s[location.first][location.second]->attack;


if(s[distneiton_Attak.first][distneiton_Attak.second]->life<=0){
    delete s[distneiton_Attak.first][distneiton_Attak.second];
    s[distneiton_Attak.first][distneiton_Attak.second]=nullptr;
}
if(s[location.first][location.second]->name=="Sniper Commander") s[location.first][location.second]->sdHilSol(s, {location.first,location.second});
 }


 