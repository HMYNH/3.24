

#include"game.h"






void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)                   //³õÊ¼»¯ÆåÅÌ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DispiayBoard(char board[ROWS][COLS], int row, int col)            //´òÓ¡ÆåÅÌ
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

