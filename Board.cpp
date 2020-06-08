
    
#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"
#include <iostream>

using namespace std;

 namespace WarGame{

    Soldier*& Board::operator[](std::pair<int,int> location){
 return board[location.first][location.second] ;
    }
    
    
    Soldier* Board::operator[](std::pair<int,int> location) const{
     if(board[location.first][location.second]==nullptr){
 
 return board[location.first][location.second] ;
    
    }
    else
    
        throw string("Try another location ");
    }
    
    
    void Board:: move(uint player_number, std::pair<int,int> source, MoveDIR direction){
                      if(source.first>=board.size()||source.second>=board.size()||board[source.first][source.second]==nullptr)
                       throw string("No soldier in this place ");
        
        else
            if(direction==Up){
                if (source.first < board.size()-1)
				{
                    if (board[source.first+1][source.second]==nullptr)
                    {
                        board[source.first +1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        if(has_soldiers(enplnum(board[source.first+1 ][source.second]->numOfplayer))){
                        board[source.first +1][source.second]->dHilSol(board,{source.first +1,source.second});
                     }
                    }
                    else
                    {
                       throw string("Please try another location ");
                    }
                }   
                else
                {
                       throw string("The limits of the game ");

                }}
                    	 	 
			if(direction==Down){
				if (source.first >0 )
				{
                    if (board[source.first-1][source.second]==nullptr)
                    {
                        board[source.first -1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                      if(has_soldiers(enplnum(board[source.first -1][source.second]->numOfplayer))){
                        board[source.first -1][source.second]->dHilSol(board,{source.first -1,source.second});
                      }
                    }
                    else
                    {
                       throw string("Please try another location ");
                    }
                }   
                else
                {
                       throw string("The limits of the game ");

                }
                    	}
    if(direction==Right){
                if (source.second < board[0].size() - 1){
                    if (board[source.first][source.second+1]==nullptr)
                    {

                        board[source.first ][source.second+1] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                         if(has_soldiers(enplnum(board[source.first ][source.second+1]->numOfplayer))){
                        board[source.first ][source.second+1]->dHilSol(board,{source.first ,source.second+1});
                         }
                    }
                    else
                    {
                       throw string("Please try another location ");
                    }
                }   
                else
                {
                       throw string("The limits of the game ");

                }
                    	 }
			if(direction==Left){
				 if (source.second > 0)
                {
                    
                    if (board[source.first][source.second-1]==nullptr)
                    {
                        board[source.first][source.second-1] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                      if(has_soldiers(enplnum(board[source.first ][source.second-1]->numOfplayer))){
                        board[source.first ][source.second-1]->dHilSol(board,{source.first,source.second-1});
                      }
                    }
                    else
                    {
                       throw string("Try another location ");
                    }
                }   
                else
                {
                       throw string("The limits of the game ");

                }
                    	}
            }
        
     int Board::enplnum(uint n){
         if(n==1)return 2;
         else return 1;
     } 
     bool Board::has_soldiers(uint player_number)const{

    for (int i = 0; i <board.size(); i++){
    for (int  j = 0; j < board[0].size(); j++){
    if(board[i][j]!=nullptr&&board[i][j]->numOfplayer==player_number)
    return true;
    }
    
    }
    return false;
    }
    
    




  void Board::printBoard(){

   }
 };