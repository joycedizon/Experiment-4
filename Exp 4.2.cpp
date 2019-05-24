#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int arnum, arr[100], x, y, z;
	
	cout << "Selection Sorting...\n";
	cout << "Enter Array Size: ";
	cin >> arnum;
	cout << "Enter the " << arnum << " elements:\n";
	
	x=0;
	while (x<arnum)
	{
		cin >> arr[x];
		x++;
	}
	
	cout << "\nYour data: ";
	for (x=0; x<arnum; x++)
	{
		cout << arr[x] << " ";
	}
	
	x=0;
	while (x<arnum)
	{
		y=x+1;
		while (y<arnum)
		{
			if (arr[x] > arr[y])
			{
				z=arr[x];
				arr[x]=arr[y];
				arr[y]=z;
			}
			y++;
		}
		x++;
	}
	
	cout << "\n\nSorted data: ";
	
	for (x=0; x<arnum; x++)
	{
		cout << arr[x] << " ";
	}
	
	_getch();
	return 0;
	
}
