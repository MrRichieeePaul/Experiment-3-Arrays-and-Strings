#include <iostream>
#include <conio.h>
using namespace std;
int i, A[7], B[7], C[7];
int main()
{
	cout << "Enter all temperature for a week of Province A, Province B, and then Province C. \n";
	for (i=0;i<7;i++)
	{
		cin >> A[i];
		cout << "\nEnter Province A, Day " << i+1 << ":" << A[i]; 
	}
	for (i=0;i<7;i++)
	{
		cin >> B[i];
		cout << "\nEnter Province B, Day " << i+1 << ":" << B[i]; 
	}
	for (i=0;i<7;i++)
	{
		cin >> C[i];
		cout << "\nEnter Province C, Day " << i+1 << ":" << C[i]; 
	}
	cout << "\nDisplaying Values: ";
	for (i=0;i<7;i++)
	{
		cout << "\nEnter Province A, Day " << i+1 << ":" << A[i]; 
	}
	for (i=0;i<7;i++)
	{
		cout << "\nEnter Province B, Day " << i+1 << ":" << B[i]; 
	}
	for (i=0;i<7;i++)
	{
		cout << "\nEnter Province C, Day " << i+1 << ":" << C[i]; 
	}
	_getch();
	return 0;
}
