#ifndef GAME1_H
#define GAME1_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include "../include/cpu.h"

int random_numbers();

int playerchoise(int turn_total, int my_pts, int opponent_pts, int my_turn_rolls);

int round(int rel_points);

typedef int (* playerpointer)(int, int, int, int);
void player(playerpointer func);

#endif