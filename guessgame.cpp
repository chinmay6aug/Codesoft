#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number, guess, tries = 0;
	
	int ch;
	
	cout << "Guess My Number Game\n\n";
	cout<<"Select difficulty level : 1.Easy   2.Intermediate  3.Extreme ";
	cout<<endl;
	cout<<"Enter your choice ( 1 or 2 or 3 ) :";
	cin>>ch;
	if(ch==1){
		cout<<"----------------------Easy Mode----------------------"<<endl;
	srand(time(0)); 
	number = rand() % 10 + 1; 
	do
	{
		cout << "Guess a number between 1 and 10 : ";
		cin >> guess;
		tries++;

		if (guess > number)
			cout << "Too high!\n\n";
		else if (guess < number)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You guessed it in :  " << tries << " guesses!\n";
			cout<<"\n--------------------Thank You For Playing--------------------\n\n";
	} while (guess != number);
	}
	if(ch==2){
		cout<<"------------------Intermediate Mode------------------"<<endl;
		srand(time(0)); 
	number = rand() % 100 + 1; 
		do
	{
		cout << "Guess a number between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > number)
			cout << "Too high!\n\n";
		else if (guess < number)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You guessed it in :  " << tries << " guesses!\n";
			cout<<"\n--------------------Thank You For Playing--------------------\n\n";
	} while (guess != number);
	}
	if(ch==3)
	{
		cout<<"---------------------Extreme Mode--------------------"<<endl;
		srand(time(0)); 
	number = rand() % 1000 + 1; 
		do
	{
		cout << "Guess a number between 1 and 1000 : ";
		cin >> guess;
		tries++;

		if (guess > number)
			cout << "Too high!\n\n";
		else if (guess < number)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You guessed it in :  " << tries << " guesses!\n";
			cout<<"\n--------------------Thank You For Playing--------------------\n\n";
	} while (guess != number);
	}
	if(ch<=0 || ch>=4)
	{
		cout<<"Invalid choice : restart from beginning"<<endl;
	}

	return 0;
}
