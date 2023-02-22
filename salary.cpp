#include<iostream>

using namespace std;

int main()
{
	int sal,pf,pa,tax,ma,da,total;
	
	cout << "Enter Your salary :- ";
	cin >> sal;
	
	 pf = sal * 3/100;
	 pa = sal * 5/100;
	 tax = sal * 10/100;
	 ma = sal * 12/100;
	 da= sal * 9/100;
	 
	 total=(pf+pa+ma)-(tax+da);
	 total=sal+total;
	 
	 
	cout << "\nYour pf is :- " << pf;
	cout << "\nYour pa is :- " << pa;
	cout << "\nYour tax is :- " << tax;
	cout << "\nYour ma is :- " << ma;
	cout << "\nYour da is :- " << da;
	
	cout << "\n\nyour Basic salary is : " << total;
	
	return 0;
	
}