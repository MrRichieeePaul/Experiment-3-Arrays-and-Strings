#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char arr[100];
	int size, i, j, k;
	cout << "Input size: ";
	cin >> size;
	cout << "Input elements: ";
	for (i=0;i<size;i++)
	cin >> arr[i];
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++)
		{
			k=arr[i];
		    arr[i]=arr[j];
		    arr[j]=k;
		}
	}
	cout << "The reverse order is: \n";
	for (i=0;i<size;i++)
	{
		cout << arr[i];
	}
	getch();
	return 0;
}
