#include <iostream>
using namespace std;
int main()
{
	int a[10], max = 0, min = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "max:" << max << "min:" << min;
	return 0;
}