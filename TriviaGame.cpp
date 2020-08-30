#include<iostream>
using namespace std;
class Question
{
   private :
   	string triviaQuestion;
	string answer1_;
	string answer2_; 
	string answer3_; 
	string answer4_; 
    char correctAns_;
	   
	static int Player1correctAnswers_;
	static int Player2correctAnswers_;

   public :	
   Question();
   void setQuestion(string);
   void setAnswer1(string);
   void setAnswer2(string);
   void setAnswer3(string);
   void setAnswer4(string);
   void correctAnswer(char);
   void Player1checkAnswer(char);
   void Player2checkAnswer(char);
   int  getPlayer1();
   int  getPlayer2();
   
 

};
int Question :: Player1correctAnswers_ = 0;
int Question :: Player2correctAnswers_ = 0;

Question::Question()
{
  triviaQuestion = "";
	answer1_ = "";
	answer2_ = "";
	answer3_ = "";
	answer4_ = "";
    Player1correctAnswers_ = 0;
    Player2correctAnswers_ = 0;

}

void Question :: setQuestion(string argQuestion = "")
{
	cout<<argQuestion<<endl;
	cout<<endl;
}


void Question :: setAnswer1(string argAnswer = "")
{
	answer1_ = argAnswer;
	cout<<answer1_<<endl;
}

void Question :: setAnswer2(string argAnswer = "")
{
	answer2_ = argAnswer;
    cout<<answer2_<<endl;
}


void Question :: setAnswer3(string argAnswer = "")
{
	answer3_ = argAnswer;
	cout<<answer3_<<endl;
}

void Question :: setAnswer4(string argAnswer = "")
{
	answer4_ = argAnswer;
	cout<<answer4_<<endl;
}

void Question :: correctAnswer(char argCorrectAnswer)
{
	correctAns_ = argCorrectAnswer;
}

void Question :: Player1checkAnswer(char argAnswer)
{
	if (correctAns_ == argAnswer)
	{
		Player1correctAnswers_++;
	}
}
void Question :: Player2checkAnswer(char argAnswer)
{
	if (correctAns_ == argAnswer)
	{
		Player2correctAnswers_++;
	}
}

int Question :: getPlayer1()
{
	return Player1correctAnswers_;
}
int Question :: getPlayer2()
{
	return Player2correctAnswers_;
}
int main()
{
	Question object[10+1];
	object[1].correctAnswer('A');
	object[2].correctAnswer('B');
	object[3].correctAnswer('C');
	object[4].correctAnswer('D');
	object[5].correctAnswer('A');
	object[6].correctAnswer('B');
	object[7].correctAnswer('C');
	object[8].correctAnswer('D');
	object[9].correctAnswer('A');
	object[10].correctAnswer('B');
	
	char choice;
	
	cout<<"\n\t\t\t!!! Let Trivia Game begin For Player One !!! \n\n"<<endl;
	
	object[1].setQuestion("1)One Plus One is Equal to : ");
	
    object[1].setAnswer1("A) 1");
    object[1].setAnswer2("B) 2");
    object[1].setAnswer3("C) 3");
    object[1].setAnswer4("D) 4");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[1].Player1checkAnswer(choice);

	object[2].setQuestion("\n2)Ten Plus Ten is Equal to : ");
	
	object[2].setAnswer1("A) 30");
    object[2].setAnswer2("B) 20");
    object[2].setAnswer3("C) 35");
    object[2].setAnswer4("D) 40");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[2].Player1checkAnswer(choice);
    

	object[3].setQuestion("\n3)Hundered Plus Hundered is Equal to : ");
	
	object[3].setAnswer1("A) 300");
    object[3].setAnswer2("B) 500");
    object[3].setAnswer3("C) 200");
    object[3].setAnswer4("D) 400");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[3].Player1checkAnswer(choice);
    
	object[4].setQuestion("\n4)Two * Thousand Plus Two * Thousand is Equal to : ");
	
	object[4].setAnswer1("A) 3000");
    object[4].setAnswer2("B) 2000");
    object[4].setAnswer3("C) 3500");
    object[4].setAnswer4("D) 4000");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[4].Player1checkAnswer(choice);
    
	object[5].setQuestion("\n5)SevenFifty * 2 Plus SevenFifty * 2 is Equal to : ");
    
    object[5].setAnswer1("A) 3000");
    object[5].setAnswer2("B) 2000");
    object[5].setAnswer3("C) 3500");
    object[5].setAnswer4("D) 4000");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[5].Player1checkAnswer(choice);
    system("cls");
    cout<<"\n\t\t\t!!! Let Trivia Game begin For Player Two !!!\n\n"<<endl;
    
	object[6].setQuestion("\n1)Two Plus Two is Equal to : ");
	
	object[6].setAnswer1("A) 5");
    object[6].setAnswer2("B) 4");
    object[6].setAnswer3("C) 6");
    object[6].setAnswer4("D) 7");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[6].Player2checkAnswer(choice);
    
	object[7].setQuestion("\n2)Two * Ten is Equal to : ");
	
	object[7].setAnswer1("A) 30");
    object[7].setAnswer2("B) 35");
    object[7].setAnswer3("C) 20");
    object[7].setAnswer4("D) 40");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[7].Player2checkAnswer(choice);
	
	object[8].setQuestion("\n3)70 / 2 is Equal to : ");
	
	object[8].setAnswer1("A) 30");
    object[8].setAnswer2("B) 20");
    object[8].setAnswer3("C) 40");
    object[8].setAnswer4("D) 35");
    
    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[8].Player2checkAnswer(choice);
    
	
	object[9].setQuestion("\n4)Twenty Plus Twenty is Equal to : ");
	
	object[9].setAnswer1("A) 20");
    object[9].setAnswer2("B) 30");
    object[9].setAnswer3("C) 35");
    object[9].setAnswer4("D) 40");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[9].Player2checkAnswer(choice);
    
    
	object[10].setQuestion("\n5)Five Plus Four is Equal to : ");

	object[10].setAnswer1("A) 8");
    object[10].setAnswer2("B) 9");
    object[10].setAnswer3("C) 6");
    object[10].setAnswer4("D) 11");

    cout<<"\nEnter Your Choice here : ";
    cin>>choice;
    
    object[10].Player2checkAnswer(choice);

cout<<"Correct Answer's For Player One are : "<<object[0].getPlayer1()<<endl;
cout<<"Correct Answer's For Player One are : "<<object[0].getPlayer2()<<endl;
if ( object[0].getPlayer1() > object[0].getPlayer2())
{
	cout<<"\n\n\t\t\t !!! Player One Wins !!!\n"<<endl;
}
else
{
		cout<<"\n\n\t\t\t !!! Player Two Wins !!!\n"<<endl;

}
}
