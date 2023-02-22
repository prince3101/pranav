#include<iostream>

using namespace std;

class Add{
	
	public:
		int a,b;
		
		void addition() 
		{
			cout << "Enter your First Number : " ;
			cin >> a;
			cout << "Enter your Secound Number : " ;
			cin >> b;
			
			cout << "\nYour Addition Is : " << a+b;
			
		}
};
class Sap{
	
	public:
		int a,b;
		
		void sapstraction() 
		{
			cout << "\nEnter your First Number : " ;
			cin >> a;
			cout << "\nEnter your Secound Number : " ;
			cin >> b;
			
			cout << "\nYour sapstraction Is : " << a-b;
		}
};
class Mal{
	
	public:
		int a,b;
		
		void maltipluction() 
		{
			cout << "\nEnter your First Number : " ;
			cin >> a;
			cout << "\nEnter your Secound Number : " ;
			cin >> b;
			
			cout << "\nYour maltipluction Is : " << a*b;
		}
};
class Div{
	
	public:
		int a,b;
		
		void divide() 
		{
			cout << "\nEnter your First Number : " ;
			cin >> a;
			cout << "\nEnter your Secound Number : " ;
			cin >> b;
			
			cout << "\nYour Divide Is : " << a/b;
		}
};

int main()
{
	
	Add t1;
	t1.addition();
	
	Sap t2;
	t2.sapstraction();
	
	Mal t3;
	t3.maltipluction();
	
	Div t4;
	t4.divide();
	
	return 0;
}