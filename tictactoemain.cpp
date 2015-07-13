#include "ttt.cpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	Tictactoe game;
	char choice=' ';
	int select=0;
	int turn=0;
	int tied=0;

	
while(select!=3)	
{
	select=0;
	
	cout<<endl<<"1)\tStart a new match (two new players)\n"<<
	"2)\tContinue the current match (the same two players\n"<<
	"3)\tExit\n";
	cin>>select;
	
	if(select==1)
	{
		game.Reset();
		select++;
	}
	if(select==2)
	{
		int i=0;
		game.ResetBoard();
		while(i<9)
		{
			turn=i%2;
			cout<<endl;
			game.DisplayBoard();
			cout<<endl<<"Player "<<turn+1<<"'s turn:\n";
			cin>>choice;
			game.ChoosePosition(choice,turn);
			i=i+game.CheckforWinner();
			
			i++;
		}
		if(i<10)
		{
			tied++;
		}
		

		game.DisplayScore(tied);
		
	}
}
	return 0;
}
