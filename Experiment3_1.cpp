#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int i, j, a, size;
	float arr[10], sum;
	cout << "Enter size, maximum of 10: ";
	cin >> size;
	cout << "Enter numbers in random separated by spaces... ";
	for (i=0;i<size;i++)
	cin >> arr[i];
	for (i=0;i<size;i++)
	{
		sum += arr[i];
		for (j=0;j<size;j++)
		{
			if (arr[i]>arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}		
	}
	cout << "\nSmallest integer: " << arr[size-1];
	cout << "\nLargest integer: " << arr[0];
	cout << "\nTotal: " << sum;
	cout << "\nAverage: " << sum/size;
	getch();
	return 0;
}
