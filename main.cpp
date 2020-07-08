#include "Cat.h"
#include "Wolf.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "Welcome to this little game. Today's participants are:" << endl;
	//Create 6 cats and 1 wolf
	
	//Put the cats in a vector. How is it best to allocate the cats? Dynamically or statically?
	
	//print the properties of all the objects

	//make all the objects move() and prepare for combat

	//start a while-loop, which will go on until either all cats die, or the wolf dies.
	while (/*Condition*/) {
		//the cats attack the wolf

		//the wolf attacks one of the cats at RANDOM 
		//(or for an extra challenge, make a function that will make the wolf decide logically who to attack based on their stats)

		/*
		Somewhere in the loop, check for the win condition, such that once a side has won
		all attacking stops, and a winner is declared.

		Note: Once a cat dies, remove it from the vector

		*/
		/*
		Additional things to implement in the loop:
		- a turn counter
		- every 4 turns, print() out all the current stats of the object still 'alive'
		- (optional) add roleplay-like elements to make the program be more interesting
		*/
	}
}