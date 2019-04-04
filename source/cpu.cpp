#include "../include/cpu.h"

/*!  *  Solicita a próxima ação para a Inteligência Artificial.  * 
 *  \param turn_total_ Pontos acumulados da rodada atual.  * 
  \param my_pts_ Pontuação geral da IA acumulado até o presente.  *  
\param opponent_pts_ Pontuação geral do oponente acumulado até o presente. 
 *  \param n_my_turn_rolls_ Quantidade de vezes que o dado foi lançado pela IA nesta rodada.  */
int cpubool(int turn_total, int my_pts, int opponent_pts, int my_turn_rolls){

	// 1 == break the turn
	// 0 == Roll the dice

	//std::cout << "passou@!@\n";
	//std::cout << turn_total << "\n"<< my_pts << "\n"<< opponent_pts << "\n"<< my_turn_rolls << "\n"<< std::endl;
	int option = 0;

	if(my_pts >= 100){
		return option = 1;
	}

	if(turn_total >= 20){
		return option = 1;
	}

	if (my_pts  <= opponent_pts){
		
		if(((my_pts + turn_total)  ) >= opponent_pts + 5){
			//std::cout << "\n\nesc -1\n\n";
			return option = 1;
			
		}
		else{
			return option = 0;
		}
	}
	else{
		if(my_turn_rolls >= 4){
			//std::cout << "\n\nesc -2\n\n";
			return option = 1;
			
		}
		else{
			return option = 0;
		} 
	}	
}