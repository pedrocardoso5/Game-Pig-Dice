//#include <iostream>// cout, endl
//#include <iomanip> // setw, setfill
//#include <cstring> // strlen
#include "../include/tablePoints.h"
void tablePoints(int points1,int points2){
  char column1[] = " PLAYER ";//8
  char column2[] = " POINTS ";//8 
  
  //Write the name of the columns
  std::cout << std::setfill ('-') << std::setw((strlen(column1)) + (strlen(column2)) + 4);//+4 por conta da barra
  std::cout << "-\n";

  std::cout << "|" << std::setw(strlen(column1)) << column1 << "|" << std::setw(strlen(column2)) << column2; 
  std::cout << "|\n";

  std::cout << std::setfill ('-') << std::setw(strlen(column1) + strlen(column2) + 4);
  std::cout << "-\n";
  
  //Write the name of the first player and his points
  std::cout << "|" << std::setfill(' ') << std::setw(strlen(column1)) << "player 1" << "|" << std::setfill(' ') << std::setw(strlen(column2)) << points1; 
  std::cout << "|\n";

  std::cout << std::setfill ('-') << std::setw((strlen(column1)) + (strlen(column2)) + 4);
  std::cout << "-\n";
  
  //Write the name of the second player and his points
  std::cout << "|" << std::setfill(' ') << std::setw(strlen(column1)) << "player 2" << "|" << std::setfill(' ') << std::setw(strlen(column2)) << points2; 
  std::cout << "|\n";
  
  std::cout << std::setfill('-') << std::setw((strlen(column1)) + (strlen(column2)) + 4);
  std::cout << "-\n";
}
