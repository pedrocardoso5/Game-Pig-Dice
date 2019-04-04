#include "../include/game1.h"
int random_numbers(){

    std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, 6 );

    return dist6(rng);
}

int round(int rel_points){
	int points = 0;
	points = random_numbers();
	std::cout << "Dice ==> " << points << std::endl;// printing the dice number
	rel_points +=  points;
	if(points == 1){
		std::cout << "Lost your turn!!" << std::endl;
		rel_points = 0;
		return rel_points;
	}
	return rel_points;
}

int playerchoise(int turn_total, int my_pts, int opponent_pts, int my_turn_rolls){
	int option = 0;
	//std::cout << "total de pontos da rodada:" << rel_points_player1 << std::endl; 
	std::cout << "0 --> ROLL OR 1 --> HOLD?" << "\n";//0 p roll e 1 pra hold
    std::cin >> option;
    return option;
}


typedef int (* playerpointer)(int, int, int, int);//set a pointer to a funcion that can be passed to others funcions
//playerpointer = &playerchoise;

void player(playerpointer func){

	int point_player1 = 0;
	int point_player2 = 0;
	int rel_points_player1 = 0;
	int rel_points_player2 = 0;
	int game_play1,game_play2;
	int option = 0;
	int dice_count = 0;
	//char name1[];
	//char name2[];

	while(true){
		//std::cout << "Escreva o nome do Player 1:" << "\n";
		//std::cin >> name1;
		std::cout << "\n---PLAYER 1 ROUND---" << "\n\n\n";
		rel_points_player1 = 0;
		while(true){//jogada player 1
			game_play1 = round(rel_points_player1);
			//std::cout << game_play1 << std::endl;//mudar caso comece com 1 
			rel_points_player1 = game_play1;

			if(game_play1 == 0){
				//std::cout << "TOTAL ---:" << point_player1 << std::endl;
				tablePoints(point_player1,point_player2);
				break;
			}
			std::cout << "Round points: " << rel_points_player1 << std::endl; 
			std::cout << "0 --> ROLL OR 1 --> HOLD?" << "\n";//0 p roll e 1 pra hold
    		std::cin >> option;
    		if(option == 1 || game_play1 == 0){
    			point_player1 += rel_points_player1;
    			//std::cout << "total de pontos ---:" << point_player1 << std::endl; 
    			std::cout << "Round close" << std::endl;
    			tablePoints(point_player1,point_player2);
    			break;
    		}
    	}

    	if(point_player1 >= 100){
			std::cout << "\n\nCongratulations player 1!!!" << "\n\n";
			break;
		}  

		//std::cout << "Escreva o nome do Player 2:" << "\n";
		//std::cin >> name2;
    	std::cout << "\n---PLAYER 2 ROUND---" << "\n\n\n";
    	rel_points_player2 = 0;
    	dice_count = 0;

    	while(true){//jogada player 2
    		game_play2 = round(rel_points_player2);
			dice_count += 1;
			//std::cout << game_play1 << std::endl;//mudar caso comece com 1 
			rel_points_player2 = game_play2;

			if(game_play2 == 0){
				//std::cout << "TOTAL ---:" << point_player2 << std::endl;
				tablePoints(point_player1,point_player2); 
				break;
			}
			//option = func();
			std::cout << "Round points: " << rel_points_player2 << std::endl;
			//std::cout << "(R)OLL OR (H)OLD?" << "\n";//0 p roll e 1 pra hold
    		//std::cin >> option;
    		option = func(rel_points_player2,point_player2,point_player1,dice_count);
    		//std::cout << "dados " << dice_count << std::endl;
    		if(option == 1 || game_play2 == 0){
    			point_player2 += rel_points_player2;
    			//std::cout << "total de pontos ---:" << point_player2 << std::endl;
    			std::cout << "Round close" << std::endl;
    			tablePoints(point_player1,point_player2); 
    			break;
    		}
    		

    	}
    	if(point_player2 >= 100){
			std::cout << "\n\nCongratulations player 2!!!" << "\n\n";
			break;
		}
	}
}


