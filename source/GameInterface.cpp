#include "../include/GameInterface.h"
void GameInterface(){
  char nome1[] = "(1)VS PLAYER";//12
  char nome2[] = "(2)VS COMPUTER";//14
    
  std::cout << std::setfill ('-') << std::setw((strlen(nome1)) + (strlen(nome2)) + 4);
  std::cout << "-\n";

  std::cout << "|" << std::setw((strlen(nome1))) << nome1 << "|" << std::setw((strlen(nome2))) << nome2; 
  std::cout << "|\n";
  
  std::cout << std::setfill('-') << std::setw((strlen(nome1)) + (strlen(nome2)) + 4);
  std::cout << "-\n";
}
