#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 9
#define COL 9


void InitBoard(char board[ROW][COL],int row,int col);

void PrintBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
