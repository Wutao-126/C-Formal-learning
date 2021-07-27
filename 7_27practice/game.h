#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 3
#define COL 3


void InitBoard(char board[][COL],int row,int col);

void PrintBoard(char board[][COL], int row, int col);

void PlayerMove(char board[][COL], int row, int col);

void ComputerMove(char board[][COL], int row, int col);

char IsWin(char board[][COL], int row, int col);
