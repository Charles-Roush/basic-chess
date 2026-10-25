#ifndef BOARD_H
#define BOARD_H
#define BOARD_SIZE 8
#define BOARD_KEY_X "    A   B   C   D   E   F   G   H\n"
#define BOARD_BLANK "  |---|---|---|---|---|---|---|---|\n"
#define BOARD_FILLER " |"

#include "pieces.h"
#include "vector2.h"

void init_board(chess_piece board[BOARD_SIZE][BOARD_SIZE]);
void print_board(chess_piece board[BOARD_SIZE][BOARD_SIZE]);
void update_board(vector2 before_pos, vector2 after_pos, chess_piece board[BOARD_SIZE][BOARD_SIZE]);
#endif