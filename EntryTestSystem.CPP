#include<iostream>
#include<iomanip>
using namespace std;
int resultIQ ;
int resultprogramming1;
int resultprogramming2;
int resultprogramming3;
int resultprogramming4;
int resultprogramming5;
//End of declaration of result variables.
//Declaration of prototypes of functions
int  QuestionIQ();
int main();
char compiledarray();
int  QuestionProgramming1();
int  QuestionProgramming2();
int  QuestionProgramming3();
int  QuestionProgramming4();
int  checkresult();
int  marks(int,int,int,int,int);
void form(string,int,int,int,int);
//End Of Declaration Of Prototypes
//Global Vriables
int i , j , k , score ,counter = 0,count = 0 ;
char examarray[25] ;
char userarray[5] ;
char userIQarray [5] = {'C' , 'A' , 'B' , 'C' , 'D'};
char IQarray[5];
char programarray1 [5] = {'C' , 'C' , 'C' , 'A' , 'B'};
char userprogramming1array [5]; 
char programarray2  [5] = { 'C', 'C' , 'C' , 'D' , 'C' };
char userprogramming2array [5];
char programarray3 [5] = { 'B' , 'A' , 'A' , 'C' , 'A' };
char userprogramming3array [5];
char programarray4 [5] = { 'D' , 'C' , 'A' , 'C' , 'A' };
char userprogramming4array [5];
//End of global variables    

//registeration
int registeration()
{
    string name ; int rollno1 ; float age ; long long int  cnic ; long long rollno ; double matricper ; double interper ; double intermediate ; double matric ; string board ;int count=0;
  int rem;
  cout<<"Enter your Full Name : ";
  getline(cin,name);
  cout<<endl;
  
  cout<<"Enter your Age  : ";
  cin>>age;
 
  
  while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again form : ";
  	cin>>age;
  	while ( age > 22 || age < 18 )
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Age must be from 18-22 for this test : ";
  	cin>>age;
  }
  }
   while ( age > 22 || age < 18 )
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Age must be from 18-22 for this test : ";
  	cin>>age;
  }
   
  while ( age < 1 )
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again from 18-22 : ";
  	cin>>age;
  }
  cout<<endl;
  cout<<"Enter your Cnic ( 13 digits) :";
  cin>>cnic;
   
  while ( cnic < 1 )
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again form : ";
  	cin>>cnic;
  	
  }
   while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form : ";
  	cin>>cnic;
  	do
  {
  rem = cnic % 10;
  cnic = (cnic - rem ) / 10;
  count++;
  }
  while ( cnic != 0 );
   if ( count == 13)
   {
   	cout<<"Correct Input \n";
   }
   if ( count < 13 )
  	{
	cout<<"Dont fool me ! \n";
  	cout<<"You Entered "<<count<<" Digits !\n";
  	cout<<endl;
    
  //number logic
  bool done = true ;
  do
  { count = 0;
  	cout<<"Enter 13 Digits please ! \n";
  	cin>>cnic;
  do
  {
  rem = cnic % 10;
  cnic = (cnic - rem ) / 10;
  count++;
  }
  while ( cnic != 0 );
  
   if ( count == 13)
   {
   	cout<<"Correct Input \n";
    break;
   }
   
  } while( done );
}
  cout<<endl;  
  }
  
  do
  {
  rem = cnic % 10;
  cnic = (cnic - rem ) / 10;
  count++;
  }
  while ( cnic != 0 );
   if ( count == 13)
   {
   	cout<<"Correct Input \n";
   }
   if ( count < 13 )
  	{
	cout<<"Dont fool me ! \n";
  	cout<<"You Entered "<<count<<" Digits !\n";
  	cout<<endl;
    
  //number logic
  bool done = true ;
  do
  { count = 0;
  	cout<<"Enter 13 Digits please ! \n";
  	cin>>cnic;
  do
  {
  rem = cnic % 10;
  cnic = (cnic - rem ) / 10;
  count++;
  }
  while ( cnic != 0 );
  
   if ( count == 13)
   {
   	cout<<"Correct Input \n";
    break;
   }
   
  } while( done );
}
  cout<<endl;  
  
  cout<<"Enter your 6 digit Rollno here Alloted by university ( i.e : 190191 ): ";
  cin>>rollno;
  
  while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form : ";
  	cin>>rollno;
  		rollno1 = rollno;
  do
  {
  rem = rollno1 % 10;
  rollno1 = (rollno1 - rem ) / 10;
  count++;
  }
  while ( rollno1 != 0 );
    
     while ( count == 6 )
    {
    		cout<<"Correct Input \n";
    		break;
	}
	
	if ( count < 6 || count > 6 )
    {
  	cout<<endl;
  //number logic
  bool done1 = true ;
  do
  { count = 0;
  	cout<<"Enter 6 Digits again ! \n";
  	cin>>rollno;
  	rollno1 = rollno;
  do
  {
  rem = rollno1 % 10;
  rollno1 = (rollno1 - rem ) / 10;
  count++;
  }
  while ( rollno1 != 0 );
  
   if ( count == 6)
   {
   	cout<<"Correct Input \n";
	break;
   }
   } while( done1 );
   }
  }
   while ( rollno < 1 )
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form : ";
  	cin>>rollno;
  		rollno1 = rollno;
  do
  {
  rem = rollno1 % 10;
  rollno1 = (rollno1 - rem ) / 10;
  count++;
  }
  while ( rollno1 != 0 );
    
     while ( count == 6 )
    {
    		cout<<"Correct Input \n";
    		break;
	}
	
	if ( count < 6 || count > 6 )
    {
  	cout<<endl;
  //number logic
  bool done1 = true ;
  do
  { count = 0;
  	cout<<"Enter 6 Digits again ! \n";
  	cin>>rollno;
  	rollno1 = rollno;
  do
  {
  rem = rollno1 % 10;
  rollno1 = (rollno1 - rem ) / 10;
  count++;
  }
  while ( rollno1 != 0 );
  
   if ( count == 6)
   {
   	cout<<"Correct Input \n";
	break;
   }
   } while( done1 );
   }
  }
    	rollno1 = rollno;
  do
  {
  rem = rollno1 % 10;
  rollno1 = (rollno1 - rem ) / 10;
  count++;
  }
  while ( rollno1 != 0 );
    
     while ( count == 6 )
    {
    		cout<<"Correct Input \n";
    		break;
	}
	
	if ( count < 6 || count > 6 )
    {
  //number logic
  bool done1 = true ;
  do
  { count = 0;
  	cout<<"Enter 6 Digits again ! \n";
  	cin>>rollno;
  	rollno1 = rollno;
  do
  {
  rem = rollno1 % 10;
  rollno1 = (rollno1 - rem ) / 10;
  count++;
  }
  while ( rollno1 != 0 );
  
   if ( count == 6)
   {
   	cout<<"Correct Input \n";
	break;
   }
   } while( done1 );
   }
 system ( "cls");
 cout<<endl;
   cout<<"************************* \n";
   cout<<"************************* \n";
   cout<<"********ACADEMICS******** \n";
   cout<<"************************* \n";
   cout<<"************************* \n";
   cout<<"*****REGISTERATION******* \n";
   cout<<"************************* \n";
   cout<<"************************* \n";
   cout<<"********ACADEMICS******** \n";
   cout<<"************************* \n";
   cout<<"**********QUIZ*********** \n";
   cout<<"**********GAME*********** \n";
   cout<<endl;
   cout<<endl;
   cin.ignore(1000,'\n');
   
  cout<<"Enter your board here in underscore characters ( i.e pindi , fedral , kpk , balochistan ) : ";
  getline(cin,board);
 
  while ( board != "fedral" && board != "pindi" && board != "balochistan" && board != "fedral" && board != "kpk" && board != "sindh") 
   {
   	cout<<"Enter the correct board with correct format : ";
   	getline(cin,board);
   }
   
   cout<<endl;

  cout<<"Enter your matriculation marks :";
  cin>>matric;
  
  while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form \n";
  	cin>>matric;
  }
  cout<<endl;
  
  cout<<"Enter your intermediate marks :";
  cin>>intermediate;
  
  while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form : \n";
  	cin>>intermediate;
  }
  
  while ( matric < 0 || matric == -0 ||   matric > 1050 || intermediate <  0 || intermediate == -0 || intermediate > 1100 )
  {
      cout<<"Wrong Input, Enter again \n";
      cout<<"Enter your matriculation marks again :";
      cin>>matric;
       
  while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form : \n";
  	cin>>intermediate;
  }
  
      cout<<"Enter your intermediate marks again :";
      cin>>intermediate;
   
  while ( cin.fail())
  {
  	cin.clear();
  	cin.ignore(1000,'\n');
  	cout<<"Enter the Input again in integer form : \n";
  	cin>>intermediate;
  }
  
  }
  matricper = matric * 100 / 1050 ;
  interper =  intermediate * 100 / 1100;
  cout<<endl;
  if ( interper >= 60.0 && interper <= 100.0  && matricper >= 60.0 && matricper <= 100.0 )
  {
  	    system("cls"); 
   cout<<"*************************************************************\n";
   cout<<"*************************************************************\n";
   cout<<"*************************************************************\n";
   cout<<"*********CONGRADULATIONS*************CONGRADULATIONS*********\n";
   cout<<"*************************************************************\n";
   cout<<"**************************YOURFORM***************************\n";
   cout<<"*************************************************************\n";
   cout<<"*************************************************************\n";
   cout<<"*************************************************************\n";

      
  cout<<endl;
  cout<<endl;
  form ( name  , age , rollno , interper , matricper );
  }
  else
  {   cout<<endl;
      cout<<"Your Academic results do not qualify for this Quiz merit \n"; 
      cout<<"Enter Again with good marks in F.S.C and MATRIC !\n"<<endl;
      cout<<endl;
      return main();
  }
  
}
 
void form(string name1 , int age1 , int rollno1 , int interper , int matricper) 
{  
    cout<<"Name : "<<name1<<"\n";
    cout<<"Age : "<<age1<<"\n";
    cout<<"Rollno : "<<rollno1<<"\n";
    cout<<"Intermediate Percentage : "<<interper<<"\n";
    cout<<"Matric Percentage : "<<matricper<<"\n";
    cout<<"Test Center : Air University"<<"\n";
    cout<<"Test date"<<" 13 December" <<"\n";
    cout<<"Test time"<<" 9:30 am"<<"\n";
    cout<<endl;
    cout<<" 1) Get Printed copy of this form \n 1) Pastport size photograph \n 3) 500 Prospectus fee for getting into test at the alloted date and time\n";
    cout<<"ThankYou!\n"<<endl;
    
}
char compiledarray()
{
      for ( j = 0 ; j < 5 ; j++ )
{
    examarray[j] =   userIQarray [j];    
}
 for (  j = 0 ; j < 5 ; j++ )
{
    examarray[j+5] = programarray1[j];    
}
 for (  j = 0 ; j < 5 ; j++ )
{
    examarray[j+10] = programarray2[j];    
}
 for (  j = 0 ; j < 5 ; j++ )
{
    examarray[j+15] = programarray3[j];    
}
 for (  j = 0 ; j < 5 ; j++ )
{
    examarray[j+20] = programarray4[j];    
}
for (i = 0 ; i < 25 ; i++ )
{
	cout<<"Option"<<i<<" : "<<examarray[i]<<endl;
}
return 0;
}
int main()
{
   string choice;
   cout<<"   ************************************* \n";
   cout<<"   ************************************* \n";
   cout<<"   ********GHULAM-E-MUSTAFA************* \n";
   cout<<"   ************************************* \n";
   cout<<"   **************QUIZ******************* \n";
   cout<<"   **************GAME******************* \n";
   cout<<"   ************************************* \n";
   cout<<"   ************************************* \n";
   cout<<"   **************QUIZ******************* \n";
   cout<<"   **************GAME******************* \n";
   cout<<"   ************************************* \n";
   cout<<"   ********1003 LINES OF CODE************\n";
   cout<<"   ************************************* \n";
   cout<<"   ************FUNCTIONS****************\n";
   cout<<"   ************************************* \n";
   cout<<"   *************ARRAYS******************\n";
   cout<<"   ************************************* \n";
   cout<<"   ************SWITCHES*****************\n";
   cout<<"   ************************************* \n";
   cout<<"   ***********NESTEDLOOPS***************\n";
   cout<<"   ************************************* \n";
   cout<<"   *********INPUTVALIDATION************* \n";
   cout<<"   ************************************* \n";
   cout<<"   ************************************* \n";
  ;


   cin.ignore(1000,'\n');
   
   registeration();
   cout<<"Do you want to Start Test\n";
   cout<<"Enter Yes or No "<<endl;
   cin>>choice;
   if ( choice == "yes" || choice == "YES" || choice == "Yes" ) 
   {
   	cout<<endl;
       cout<<"Proceed to the Section 1!";
       resultIQ = QuestionIQ();
       resultIQ *= 4 ;
	   cout<<" Your score in  Section 1 (IQ) is = "<<resultIQ<<"/20\n";
   cout<<endl;
        if ( resultIQ >= 12 ) 
       {
       cout<<"Proceed to the Section 2!\n";
       resultprogramming1 = QuestionProgramming1();
       resultprogramming1 *= 4 ;
       cout<<"*********************CONGRADULATIONS***************************\n";
       cout<<" Your score in  Programming Section 1 is = "<<resultprogramming1<<"/20\n"; 
    cout<<endl;
        if ( resultprogramming1 >= 8 )
        {
         cout<<"Proceed to Section 2!\n";
         resultprogramming2 = QuestionProgramming2();
         resultprogramming2 *= 4;
         cout<<"*********************CONGRADULATIONS***************************\n";
         cout<<" Your score in Programming Section 2 is = "<<resultprogramming2<<"/20\n"; 
        }
        else if ( resultprogramming1 < 8 )
        {
           cout<<endl;
           cout<<endl;
       cout<<"You Did not qualified for Section 2 !"<<endl;
       cout<<"Improve your Skills ! Goodluck\n";
        }
        if ( resultprogramming2 >= 8 )
        {
         cout<<"Proceed to Section 3!\n";
         resultprogramming3 = QuestionProgramming3();
         resultprogramming3 *= 4;
         cout<<"*********************CONGRADULATIONS***************************\n";
         cout<<" Your score in Programming Section 3 is = "<<resultprogramming3<<"/20\n"; 
        }
        else if ( resultprogramming2 < 8 )
        {
           cout<<endl;
           cout<<endl;
       cout<<"You Did not qualified for Section 4 !"<<endl;
       cout<<"Improve your Skills ! Goodluck\n";
        }
         if ( resultprogramming3 >= 8 )
        {
         cout<<"Proceed to Section 4!\n";
         resultprogramming4 = QuestionProgramming4();
         resultprogramming4 *= 4;
         cout<<"*********************CONGRADULATIONS***************************\n";
         cout<<" Your score in Programming Section 4 is = "<<resultprogramming4<<"/20\n"; 
         cout<<"*****************************************************************\n";
         cout<<"*****************************************************************\n";
		 cout<<"The Correct Options are : \n";
		 compiledarray();
		 marks(resultIQ,resultprogramming1,resultprogramming2,resultprogramming3,resultprogramming4);
         
        }
       
       } 
        else if ( resultIQ < 12 )
       {
           cout<<endl;
           cout<<endl;
       cout<<"You Did not qualified for Section 2 !"<<endl;
       cout<<"Improve your Skills ! Goodluck\n";
       }
   }
 
   if ( choice == "no" || choice == "No " || choice == "NO" ) 
   {
       cout<<"GoodBye!";
   }
   
} 
  int marks (int sec1 , int sec2 , int sec3, int sec4 , int sec5 )
  {
  	int finalresult;
	  
	  finalresult = sec1 + sec2 + sec3 + sec4 + sec5 ;
	  if ( finalresult >= 50 )
	  {
 	  cout<<"HOoray !! You Passed and Your Numbers n this Test are = " <<finalresult<<"/100"<<endl;
      }
      else if ( finalresult <= 49 ) 
      {
      	cout<<"You Failed !!!"<<endl;
	  }
	  cout<<endl;
	  cout<<endl;
	  
   cout<<"**************************************************************\n";
   cout<<"**************************************************************\n";
   cout<<"**************************************************************\n";
   cout<<"*************************FINISH*******************************\n";
   cout<<"**************************************************************\n";
   cout<<"**************************************************************\n";
   cout<<"**************************************************************\n";	  
  	
  }
int QuestionIQ()
{  cout<<endl;
   cout<<"************************ \n";
   cout<<"************************ \n"; 
   cout<<"*******IQ SECTION******* \n";
   cout<<"************************ \n";
   cout<<"************************ \n";
	cout<<endl;
    cout<<"1) What Comes next in the series ? \n"
    "1  , 3  , 5  , 7 , 9 ,  ?  \n"
    "A) 16 \n"
    "B) 13 \n"
    "C) 11 \n"
    "D) 14 \n"<<endl;
    cin>>IQarray[0];
    while (  IQarray[0] != 'A' && IQarray[0] != 'B' && IQarray[0] != 'C' && IQarray[0] != 'D' )
    {
        cout<<"Enter the correct Option Again ! : ";
        cin>>IQarray[0];
    }
    cout<<endl;
    cout<<"2) Which Country name is in this jumbled spelling 'irasy' \n"
    "A) Country \n"
    "B) Capital \n"
    "C) City \n"
    "D) State "<<endl;
    cin>>IQarray[1];
    while (  IQarray[1] != 'A' && IQarray[1] != 'B' && IQarray[1] != 'C' && IQarray[1] != 'D' )
    {
        cout<<"Enter the correct Option Again ! : ";
        cin>>IQarray[1];
    }
    cout<<endl;
    cout<<"3) What comes next in the following series ? \n"
    " 3 , 6 , 12 , 24 , 48 , ? \n"
    "A) 96 \n"
    "B) 98 \n"
    "C) 56 \n"
    "D) 24 "<<endl;
    cin>>IQarray[2];
    while ( IQarray[2] != 'A' && IQarray[2] != 'B' && IQarray[2] != 'C' && IQarray[2] != 'D' )
    {
        cout<<"Enter the correct Option Again ! : ";
        cin>>IQarray[2];
    }
    cout<<endl;
    cout<<"4) 2*2 = 5 , 3*3 = 10 , 9*9 = 82 , 10*10 = ? \n"
    "A) 99 \n"
    "B) 102 \n"
    "C) 101 \n"
    "D) 100"<<endl;
    cin>>IQarray[3];
    while (  IQarray[3] != 'A' && IQarray[3] != 'B' && IQarray[3] != 'C' && IQarray[3] != 'D' )
    {
        cout<<"Enter the correct Option Again ! : ";
        cin>>IQarray[3];
    }
    cout<<endl;
    cout<<"5) Rashid is facing east , He turns right walks 40 meters facing north , Then towards his south and walks 40 meters , then he turns right \n"
    "Which Dirction he is facing now \n"
    "A) West \n"
    "B) North\n"
    "C) South\n"
    "D) East "<<endl;
    cin>>IQarray[4];
    while ( IQarray[4] != 'A' && IQarray[4] != 'B' && IQarray[4] != 'C' && IQarray[4] != 'D' )
    {
        cout<<"Enter the correct Option Again ! : ";
        cin>>IQarray[4];
    }
    cout<<endl;
    for ( i = 0 ; i <= 4 ; i++ )
    {
        if ( IQarray[i] == userIQarray[i] ) 
        {
            count++;
        }
    }
    return count;
}

int QuestionProgramming1()
 {	
  cout<<endl;
  cout<<"	Programming Section : 1 	\n";
  cout<<endl;
 
  cout<<"1) What letter is used from the keyboard to end the statement in C++ \n"
  "A) & \n"
  "B) % \n"
  "C) ; \n"
  "D) # "<<endl;
  cin>>userprogramming1array[0];
  while ( userprogramming1array[0] != 'A' && userprogramming1array[0] != 'B' && userprogramming1array[0] != 'C' && userprogramming1array[0] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming1array[0];
  }
  cout<<endl;
  cout<<"2)	<iostream> and #include	are ? \n"
  "A) Statement and Comment \n"
  "B) Library and Preprocessor Directive \n"
  "C) Preprocessor Directive and Library \n"
  "D) None of these "<<endl;
  cin>>userprogramming1array[1];
  while ( userprogramming1array[1] != 'A'&& userprogramming1array[1] != 'B'&& userprogramming1array[1] != 'C'  && userprogramming1array[1] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming1array[1];
  }
  cout<<endl;
  cout<<"3) What numeric value is returned at the end of C++ main function \n"
  "A) 100 \n"
  "B) 01 \n"
  "C) 0  \n"
  "D) 10 "<<endl;
  cin>>userprogramming1array[2];
  while ( userprogramming1array[2] != 'A' && userprogramming1array[2] != 'B' && userprogramming1array[2] != 'C' && userprogramming1array[2] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming1array[2];
  }
  cout<<endl;
  cout<<"4) Minimum size for char in C++ is ?\n"
  "A) 8  \n"
  "B) 16 \n"
  "C) 2  \n"
  "D) 4  "<<endl;
  cin>>userprogramming1array[3];  
  while ( userprogramming1array[3] != 'A' && userprogramming1array[3] != 'B'&& userprogramming1array[3] != 'C' && userprogramming1array[3] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming1array[3];
  }
  cout<<endl;
   cout<<"5) Minimum size of long and short integer is ? \n"
   "A) 16 and 16 \n"
   "B) 32 and 16 \n"
   "C) 16 and 32 \n"
   "D)  8 and 4  "<<endl;
   cin>>userprogramming1array[4];
   while ( userprogramming1array[4] != 'A'&& userprogramming1array[4] != 'B' && userprogramming1array[4] != 'C' && userprogramming1array[4] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming1array[4];
  }
  cout<<endl;
   int count=0;
   for ( int i = 0 ; i <= 4 ; i++ )
   {
       if ( programarray1[i] == userprogramming1array[i] )
       {
           count++;
       }
   }
   return count;
 }

int QuestionProgramming2()
{

 cout<<"1)What is the correct value to return to the operating system upon the successful completion of a program? \n"
  "A) -1 \n"
  "B) 1 \n"
  "C) 0 \n"
  "D) Programs donot return value \n"<<endl;
  cin>>userprogramming2array[0];
  while ( userprogramming2array[0] != 'A' && userprogramming2array[0] != 'B' && userprogramming2array[0] != 'C' && userprogramming2array[0] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming2array[0];
  }
  cout<<endl;
 cout<<"2)What is the correct value to return to the operating system upon the successful completion of a program?\n"
  "A) class \n"
  "B) struct \n"
  "C) main \n"
  "D) system \n"<<endl;
 cin>>userprogramming2array[1];
  while ( userprogramming2array[1] != 'A' && userprogramming2array[1] != 'B' && userprogramming2array[1] != 'C' && userprogramming2array[1] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming2array[1];
  }
  cout<<endl;
  cout<<"3)Which of the following is not a correct variable type?\n"
 "A) int \n"
 "B) char\n"
 "C) real\n"
 "D) double\n"<<endl;
 cin>>userprogramming2array[2];
   while ( userprogramming2array[2] != 'A' && userprogramming2array[2] != 'B' && userprogramming2array[2] != 'C' && userprogramming2array[2] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming2array[2];
  }
  cout<<endl;
  cout<<"4)Which of the following is the correct operator to compare two variables? \n"
  "A) = \n"
  "B) ! \n"
  "C) / \n"
  "D) ==\n"<<endl;
  cin>>userprogramming2array[3];
   while ( userprogramming2array[3] != 'A' && userprogramming2array[3] != 'B' && userprogramming2array[3] != 'C' && userprogramming2array[3] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming2array[3];
  }
  cout<<endl;
  cout<<"5)Which of the following is true? \n"
  "A) 0 \n"
  "B)-1 \n"
  "C) 1 \n"
  "D) All of above \n"<<endl;
  cin>>userprogramming2array[4];
 while ( userprogramming2array[4] != 'A' && userprogramming2array[4] != 'B' && userprogramming2array[4] != 'C'&& userprogramming2array[4] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming2array[4];
  }
  cout<<endl;
  int count=0;
   for ( int i = 0 ; i <= 4 ; i++ )
   {
       if ( programarray2[i] == userprogramming2array[i] )
       {
           count++;
       }
   }
   return count;
}

int QuestionProgramming3()
  {
   cout<<"1)Which of the following is the boolean operator for logical-and? \n"
   "A) |& \n"
   "B) && \n"
   "C) &  \n"
   "D) *& \n"<<endl;
  cin>>userprogramming3array[0];
    while ( userprogramming3array[0] != 'A' && userprogramming3array[0] != 'B' && userprogramming3array[0] != 'C' && userprogramming3array[0] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming3array[0];
  }
  cout<<endl;
   cout<<"2) Evaluate !(1 && !(0 || 1))\n"
   "A) true \n"
   "B) false \n"
   "C) unevaluateable \n"
   "D) both A) and B) \n"<<endl;
  cin>>userprogramming3array[1];
    while ( userprogramming3array[1] != 'A' && userprogramming3array[1] != 'B' && userprogramming3array[1] != 'C' && userprogramming3array[1] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming3array[1];
  }
  cout<<endl;
  cout<<"3) Evaluate 2*2+2/2%2 \n"
   "A) 4 \n"
   "B) infinte \n"
   "C) 0 \n"
   "D) 2 \n"<<endl;
   cin>>userprogramming3array[2];
    while ( userprogramming3array[2] != 'A' && userprogramming3array[2] != 'B' && userprogramming3array[2] != 'C' && userprogramming3array[2] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming3array[2];
  }
  cout<<endl;
   cout<<"4) Function for random numbers in ? \n"
   "A) no such function\n"
   "B) random()\n"
   "C) rand()\n"
   "D) ranum()\n"<<endl;
   cin>>userprogramming3array[3];
    while ( userprogramming3array[3] != 'A' && userprogramming3array[3] != 'B' && userprogramming3array[3] != 'C' && userprogramming3array[3] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming3array[3];
  }
  cout<<endl;
   cout<<"5) strcmp() is used to ? \n"
   "A) compare two strings \n"
   "B) add two strings \n"
   "C) cancel two strings\n"
   "D) copy two strings\n"<<endl;
  cin>>userprogramming3array[4];
    while ( userprogramming3array[4] != 'A' && userprogramming3array[4] != 'B' && userprogramming3array[4] != 'C' && userprogramming3array[4] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming3array[4];
  }
  cout<<endl;
  int count=0;
   for ( int i = 0 ; i <= 4 ; i++ )
   {
       if ( programarray3[i] == userprogramming3array[i] )
       {
           count++;
       }
   }
   return count;
}
int QuestionProgramming4()
{  
   cout<<"1) In cpp \a is used for \n"
   "A) line break \n"
   "B) form feed \n"
   "C) select all\n"
   "D) alarm \n" <<endl;
   cin>>userprogramming4array[0];
    while ( userprogramming4array[0] != 'A' && userprogramming4array[0] != 'B' && userprogramming4array[0] != 'C' && userprogramming4array[0] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming4array[4];
  }
  cout<<endl;
   cout<<"2) Which is not the type of variable\n"
   "A) Extern\n"
   "B) Global\n"
   "C) Register\n"
   "D) None\n"<<endl;
   cin>>userprogramming4array[1];
    while ( userprogramming4array[1] != 'A' && userprogramming4array[1] != 'B' && userprogramming4array[1] != 'C' && userprogramming4array[1] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming4array[1];
  }
  cout<<endl;
   cout<<"3) In cpp a function can return ? \n"
   "A)single value \n"
   "B)double value \n"
   "C)many value \n"
   "D)none \n"<<endl;
   cin>>userprogramming4array[2];
    while ( userprogramming4array[2] != 'A' && userprogramming4array[2] != 'B' && userprogramming4array[2] != 'C' && userprogramming4array[2] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming4array[2];
  }
  cout<<endl;
   cout<<"4) What is a reference\n"
   "A) a pointer to an array \n"
   "B) a pointer to a variable \n"
   "C) an alias to a variable \n"
   "D) none of these \n"<<endl;
  cin>>userprogramming4array[3];
     while ( userprogramming4array[3] != 'A' && userprogramming4array[3] != 'B' && userprogramming4array[3] != 'C' && userprogramming4array[3] != 'D' )
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming4array[3];
  }
  cout<<endl;
   cout<<"5) The << operator in cpp is called : \n"
   "A) insertion\n"
   "B) extraction\n"
   "C) put to operator\n"
   "D) both a and c \n"<<endl;
   cin>>userprogramming4array[4];
    while ( userprogramming4array[4] != 'A' && userprogramming4array[4] != 'B' && userprogramming4array[4] != 'C'&& userprogramming4array[4] != 'D')
  {
    cout<<"Enter the correct Option Again ! : ";
    cin>>userprogramming4array[4];
  }
  cout<<endl;
  int count=0;
   for ( int i = 0 ; i <= 4 ; i++ )
   {
       if ( programarray4[i] == userprogramming4array[i] )
       {
           count++;
       }
   }
   return count;
}


   
