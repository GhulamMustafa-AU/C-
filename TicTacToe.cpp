//TicTtacToe Game 
#include<iostream>
#include<iomanip>
#include<string.h>
#include<vector>
using namespace std;


class tictactoe
{
	private :
	char player1;
	char player2;
	char array[9];
	vector<char>inputs;
	int input;
	// main function can never access private members of a class even with help of pointers

	public :
	// can be accessed all over the program
	int check;
	int turn1;
	int turn2;
    int winplayer1;
    int winplayer2;
		void display();
		void player1inputs();
		void player2inputs();
		void checkplayer1();
		void checkplayer2();
	    void checkdraw();
	    void inputcheck(int);
		void settingplayer1input(const int);
		void settingplayer2input(const int);
		void playersymbols(char,char);
};


void tictactoe :: display()
{

for ( int i = 1 ; i < 10 ; i++ )
	{
		{
			if ( array[i] ==  '@' || array[i] == 'O'  )
			{
				continue;
			}
			
			else if ( array[i] !=  '@' || array[i] != 'O')
			{
			array[i] = '!';
		    }
		}
	}
	system("cls");
	cout<<"\n\t\t\t\t    TicTacToe Game\n  ";
	cout<<"\n\n\n";
	cout<<"\t\t\t "<<array[1]<<" \t|\t "<<array[2]<<" \t|\t "<<array[3]<<"\n";
	cout<<"\t\t\t______________________________________\n";
	cout<<"\t\t\t "<<array[4]<<" \t|\t "<<array[5]<<" \t|\t "<<array[6]<<"\n";
	cout<<"\t\t\t______________________________________\n";
	cout<<"\t\t\t "<<array[7]<<" \t|\t "<<array[8]<<" \t|\t "<<array[9]<<"\n";
}

void tictactoe :: playersymbols ( char player1symbol , char player2symbol )
{
	player1 = player1symbol;
	player2 = player2symbol;
}

void tictactoe :: player1inputs()
{
   
	int player1turn;
	cout<<"\n\n Player One's[O] Turn : ";
	cin>>player1turn;	

    turn1 = player1turn;
    
}

void tictactoe :: player2inputs()
{
   
	int player2turn;
	cout<<"\n\n Player Tow's[@] Turn : ";
	cin>>player2turn;
	
	turn2  = player2turn;
	

}

void tictactoe :: settingplayer1input( const int t1urn )
{
if ( t1urn == 1)
     {
	array[1] = player1;
     }
if ( t1urn == 2)
     {
	array[2] = player1;
     }
if ( t1urn == 3)
     {
	array[3] = player1;
     }
if ( t1urn == 4)
     {
	array[4] = player1;
     }
if ( t1urn == 5)
     {
	array[5] = player1;
     }
if ( t1urn == 6)
     {
	array[6] = player1;
     }
if ( t1urn == 7)
     {
	array[7] = player1;
     }
if ( t1urn == 8)
     {
	array[8] = player1;
     }
if ( t1urn == 9)
     {
	array[9] = player1;
     }
}

void tictactoe :: settingplayer2input(const int t2urn)
{
	

if ( t2urn == 1)
     {
	array[1] = player2;
     }
if ( t2urn == 2)
     {
	array[2] = player2;
     }
if ( t2urn == 3)
     {
	array[3] = player2;
     }
if ( t2urn == 4)
     {
	array[4] = player2;
     }
if ( t2urn == 5)
     {
	array[5] = player2;
     }
if ( t2urn == 6)
     {
	array[6] = player2;
     }
if ( t2urn == 7)
     {
	array[7] = player2;
     }	 
if ( t2urn == 8)
     {
	array[8] = player2;
     }	
if ( t2urn == 9)
     {
	array[9] = player2;
     }
}

void tictactoe :: checkplayer1 ()
{
	winplayer1 = -1;
	if ( array[1] == player1 && array[2] == player1 && array[3] == player1 )
	{
		winplayer1 = 1;
	}
	if ( array[1] == player1 && array[4] == player1 && array[7] == player1 )
	{
	    winplayer1 = 1;

	}
	if ( array[1] == player1 && array[5] == player1 && array[9] == player1 )
	{
		winplayer1 = 1;

	}
	if ( array[2] == player1 && array[5] == player1 && array[8] == player1 )
	{
		winplayer1 = 1;
		
	}
	if ( array[3] == player1 && array[6] == player1 && array[9] == player1 )
	{
		winplayer1 = 1;
		
	}
	if ( array[3] == player1 && array[5] == player1 && array[7] == player1 )
	{
		winplayer1 = 1;
		
	}
	if ( array[4] == player1 && array[5] == player1 && array[6] == player1 )
	{
		winplayer1 = 1;
		
	}
	if ( array[7] == player1 && array[8] == player1 && array[9] == player1 )
	{
		winplayer1 = 1;
		
	}

}

void tictactoe :: checkplayer2 ()
{
	winplayer2 == -1;
	if ( array[1] == player2 && array[2] == player2 && array[3] == player2 )
	{
		winplayer2 = 1;
	}
	if ( array[1] == player2 && array[4] == player2 && array[7] == player2 )
	{
		winplayer2 = 1;
		
	}
	if ( array[1] == player2 && array[5] == player2 && array[9] == player2 )
	{
		winplayer2 = 1;
		
	}
	if ( array[2] == player2 && array[5] == player2 && array[8] == player2 )
	{
		winplayer2 = 1;
		
	}
	if ( array[3] == player2 && array[6] == player2 && array[9] == player2 )
	{
		winplayer2 = 1;
		
	}
	if ( array[3] == player2 && array[5] == player2 && array[7] == player2 )
	{
		winplayer2 = 1;
		
	}
	if ( array[4] == player2 && array[5] == player2 && array[6] == player2 )
	{
		winplayer2 = 1;
		
	}
	if ( array[7] == player2 && array[8] == player2 && array[9] == player2 )
	{
		winplayer2 = 1;
		
	}

}

void tictactoe :: inputcheck(int input)
{
	int count = 0;
	for ( int i = 0 ; i != inputs.size() ; i++  )
	{
		if ( input == inputs[i])
		{
           check = 0;
		}
	count++;
	}
	if (count == inputs.size())
	{
		inputs.push_back(input);
		check = 1;
	}
		
}

int main()
{
	tictactoe *gameptr = new tictactoe;

 while (true)
 {
 
	gameptr->display();
	gameptr->playersymbols('O','@');
	gameptr->player1inputs();
	gameptr->inputcheck(gameptr->turn1);
	if ( gameptr->check == 1 )
	{
	gameptr->settingplayer1input(gameptr->turn1);
    }
    else if ( gameptr->check == 0)
    {
    
	while ( gameptr->check == 0 )
    {
    		gameptr->player1inputs();
     		gameptr->inputcheck(gameptr->turn1);
    if ( gameptr->check == 1 )
	{
	break;
	}
	}
	}
	if ( gameptr->check == 1 )
	{
	gameptr->settingplayer1input(gameptr->turn1);
	}
	gameptr->checkplayer1();
	
	if ( gameptr->winplayer1 == -1  )
	{

	}
	else if ( gameptr->winplayer1 == 1 )
	{
	    gameptr->display();
		cout<<"\n\n\t\t\t !! Player One[O] wins !! ";
		false;
		break;
	}
	
	gameptr->display();
    gameptr->player2inputs();
	gameptr->settingplayer2input(gameptr->turn2);
	gameptr->checkplayer2();
	
	if ( gameptr->winplayer2 == -1 )
	{
		
	}
	
	else if ( gameptr->winplayer2 == 1 )
	{
		gameptr->display();
		cout<<"\n\n\t\t\t !! Player Two[@] wins !! ";
        
		false;
		break;
	}
    
 }
cout<<endl;

 system("pause");
}
