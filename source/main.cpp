#include <iostream>
#include <stdlib.h>
#include "../include/game1.h"
#include "../include/cpu.h"


int main(){

	int choice;
	int choice2;

 std::cout <<" _____ _         _____  _           \n";
 std::cout <<"|  __ (_)       |  __ |(_)          \n";
 std::cout <<"| |__) |  __ _  | |  | |_  ___ ___  \n";
 std::cout <<"|  ___/ |/ _` | | |  | | |/ __/ _ | \n";
 std::cout <<"| |   | | (_| | | |__| | | (_|  __/ \n";
 std::cout <<"|_|   |_||__, | |_____/|_||___|___| \n";
 std::cout <<"          __/ |                     \n"; 
 std::cout <<"         |___/                      \n\n\n";



	std::cout << "1 - Start Game: " << "\n";
	std::cout << "2 - Instructions: " << "\n";
	std::cout << "3 - Exit: " << "\n";
	std::cin >> choice;

	switch(choice){
		case 1:
			GameInterface();
			std::cout << "Select the type of game:" << "\n";
			std::cin >> choice2;
			if(choice2 == 1){//1 p player
				player(playerchoise);
			}
			if(choice2 == 2){//2 p pc
				player(cpubool);
			}
			break;
			
		case 2:	
			std::cout << "The game is organized in turns" << "\n";
			std::cout << "The player who scores 100 or more points at the end of the game is the winner." << "\n";
			std::cout << "Each turn, the same player keeps rolling the dice until the player decides to hold" << "\n";
			std::cout << "If he chooses to hold, the total points accumulated in the round are saved" << "\n";
			std::cout << "But if the face give 1, the total points of the turn will become 0 and becomes the opponent's turn" << "\n";
			break;
		
		case 3:
			break;
				
		default:
			std::cout << "Invalid Option!\n";
			//break;
	}
	
	return 0;
}
