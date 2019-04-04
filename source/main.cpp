#include <iostream>
#include <stdlib.h>
#include "../include/game1.h"
#include "../include/cpu.h"

int main(){

	int choice;
	int choice2;
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
			printf("Opcao invalida");
			//break;
	}
	
	return 0;
}