#include<iostream>

using namespace std;

class CostDemo{
	
	public:
		CostDemo(int a,int b)
		{
			cout << "Your Addition value is : " << a+b;
			cout << "\nYour Substraction value is : " << a-b;                                                                                                                            
			cout << "\nYour Multiplication value is : " << a*b;
			cout << "\nYour Division value is : " << a/b;
		}
};
int main()
{
	CostDemo c1(30,20);
}