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



	std::cout << "1 - Iniciar jogo: " << "\n";
	std::cout << "2 - Instrucoes: " << "\n";
	std::cout << "3 - Sair: " << "\n";
	std::cin >> choice;

	switch(choice){
		case 1:
			std::cout << "Selecione o tipo de partida:" << "\n";
			std::cin >> choice2;
			if(choice2 == 1){//1 p player
				player(playerchoise);
			}
			if(choice2 == 2){//2 p pc
				player(cpubool);
			}
			break;
			
		case 2:	
			//system("cls");
			//puts("Instrucoes:");
			break;
		
		case 3:
			break;
				
		default:
			std::cout << "Opcao invalida \n";
			//break;
	}
	
	return 0;
}