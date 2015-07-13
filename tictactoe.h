
#include<string>
using namespace std;
#ifndef TTT_H
#define TTT_H

struct Player
{	
	string name;
	char symbol;
	int currentscore;
	
};
class Tictactoe
{	
private:
	Player p1, p2;
	int currentwinner;
	char board[3][3];
public:
//constructor
	Tictactoe()
	{	
		p1.name="Player1";
		p1.symbol= 'X';
		p1.currentscore= 0;
		p2.name="Player2";
		p2.symbol= 'O';
		p2.currentscore= 0;
		currentwinner= 0;

		board[0][0]='1';
		board[0][1]='2';
		board[0][2]='3';
		board[1][0]='3';
		board[1][1]='4';
		board[1][2]='5';
		board[2][0]='6';
		board[2][0]='7';
		board[2][1]='8';
		board[2][2]='9';
	}

	void Reset();
	void ResetBoard();
	void DisplayBoard();

	void ChoosePosition(char, int);
	int CheckforWinner();

	void DisplayScore(int);
	
	
};

#endif
