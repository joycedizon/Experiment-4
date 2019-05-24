#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

	void addition ()
	{
		int num1, num2, sum;
		cout << "Enter your two numbers: ";
		cin >> num1 >> num2;
		sum = num1 + num2;
		cout << "Sum is " << sum;
		
		return;
	}
	
	void subtraction ()
	{
		int num1, num2, diff;
		cout << "Enter your two numbers: ";
		cin >> num1 >> num2;
		diff=num1-num2;
		cout << "The difference is " << diff;
		return;
	}
	
	void product ()
	{
		int num1, num2, prod;
		cout << "Enter your two numbers: ";
		cin >> num1 >> num2;
		prod = num1*num2;
		cout << "The product is " << prod;
		return;
	}
	
	void quotient ()
	{
		int num1, num2;
		float quo;
		cout << "Enter your two numbers: ";
		cin >> num1 >> num2;
		quo = num1/num2;
		cout << "The quotient is " << quo;
		return;
	}
	
	void modu ()
	{
		int num1, num2;
		float mod;
		cout << "Enter your two numbers: ";
		cin >> num1 >> num2;
		mod = num1%num2;
		cout << "The remainder is " << mod;
		return;
	}


int main()
{
	int opp;
	float quo, mod, prod;
	char con;
	
	cout << "Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n";
	
	do
	{
		cout << "Enter your choice of operator: ";
		cin >> opp;
			
			switch (opp)
			{
				case 1:
					addition ();
				break;
		
				case 2:
					subtraction ();
				break;
		
				case 3:
					product ();
				break;
		
				case 4:
					quotient ();
				break;
		
				case 5:
					modu ();
				break;
		
				default:
				cout << "Try again!";
			}
		
		cout << "\n\nPress 'Y' to choose an operation again: ";
		cin >> con;
		
		cout <<"\n";
		
	} while(con=='y' || con=='Y');
	cout << "Thank You!";
	
	_getch();
	return 0;
	
}
