

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);               
void DispiayBoard(char board[ROWS][COLS], int row, int col);            
void SetMine(char board[ROW][COL], int row, int col);

