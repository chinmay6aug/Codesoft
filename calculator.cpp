#include <iostream>
using namespace std;


int main()
{
	char op;
	float number1, number2;
	cout<<endl;
	cout<<"--------------------Calculator-------------------";
	cout<<endl;


    cout<<"Enter the operator ( + , - , * , / ) :";
	cin >> op;
    cout<<endl;

	
    cout<<"Enter two numbers :- "<<endl;
    cout<<"Enter first number :";
	cin >> number1;
    cout<<endl;
    cout<<"Enter second number :";
	cin >> number2;
    cout<<endl;


	
	switch (op) {
	
	case '+':
        int add;
        add=number1 + number2;
		cout << "Addition of  given numbers is : "<<add;
		break;

	
	case '-':
       int sub;
       sub=number1 - number2;
		cout << "Subtraction of  given numbers is : "<<sub;
		break;


	case '*':
       int mul;
       mul=number1 * number2;
		cout << "Multiplication of given numbers is : "<<mul;
		break;

	case '/':
      int div;
      div=number1 / number2;
		cout << "Division of given numbers is : "<<div;
		break;

	
	default:
		cout << "Error! choose the correct operator ";
	}
	

	return 0;
}
