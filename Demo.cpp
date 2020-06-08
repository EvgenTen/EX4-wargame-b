/**
  Demo for the war-game exercise.

  @author Oz Levi
  @since  2020-05
**/
#ifndef COMMANDS_H_
#define COMMANDS_H_
#include <iostream>
#include "DemoGame.hpp"  

using namespace std;

int main() {
	WarGame::DemoGame demoGame;
	cout << "The winner is:\n " << demoGame.play() << endl;
    return 0;
};
#endif