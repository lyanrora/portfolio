#include "ttt.h"
#include <iostream>
using namespace std;

//reset board
void Tictactoe::Reset()
{    
	p1.currentscore= '0';
	p2.currentscore= '0';
	currentwinner= 0;

	board[0][0]='1';
	board[0][1]='2';
	board[0][2]='3';
	board[1][0]='4';
	board[1][1]='5';
	board[1][2]='6';
	board[2][0]='7';
	board[2][1]='8';
	board[2][2]='9';
}
void Tictactoe::ResetBoard()
{
	board[0][0]='1';
	board[0][1]='2';
	board[0][2]='3';
	board[1][0]='4';
	board[1][1]='5';
	board[1][2]='6';
	board[2][0]='7';
	board[2][1]='8';
	board[2][2]='9';

}

void Tictactoe::ChoosePosition(char choice, int turn)
{

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(board[i][j]==choice)
			{
				if(turn==0)
				{
					board[i][j]=p1.symbol;
				}
				else
				{
					board[i][j]=p2.symbol;
				}
			}
		}
	}
}
int Tictactoe::CheckforWinner()
{
	int i=0;

	for(int i=0; i<3; i++)
	{
	if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
	{
		if(board[i][0]=='X')
		{
			p1.currentscore++;
		}
		else
		{
			p2.currentscore++;
		}
		i=10;
	}
	else if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
	{
		if(board[i][0]=='X')
		{
			p1.currentscore++;
		}
		else
		{
			p2.currentscore++;
		}
		i=10;
	}
	}
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
	{
		if(board[0][0]=='X')
		{
			p1.currentscore++;
		}
		else
		{
			p2.currentscore++;
		}
		i=10;
	}
	else if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
	{
		if(board[0][2]=='X')
		{
			p1.currentscore++;
		}
		else
		{
			p2.currentscore++;
		}
		i=10;
	}
	return i;
	
}
void Tictactoe::DisplayScore(int tied)
{
	cout<<"\tPlayer One\tPlayer Two\tTied Games\n";
	cout<<"--------------------------------------\n";
	cout<<"\t"<<p1.currentscore<<"\t"<<p2.currentscore<<
	"\t"<<tied<<endl;
}







//shows board
void Tictactoe::DisplayBoard()
{
	for(int i=0; i<3; i++)
	{	
		
		for(int j=0; j<3; j++)
		{
			cout<<board[i][j];
			if(j<2)
			{
				cout<<"|";
			}
		}
		cout<<endl;
		if(i<2)
		{
			cout<<"---------\n";
		}
	}
}



