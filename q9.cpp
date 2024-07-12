#include <iostream>
using namespace std;
int res(int n)
{
	int sum = 0, i;
	while (n>0)
	{
		i = n % 10;
		sum = sum * 10 + i;
		n = n / 10;
	}
	return sum;
}
int main()
{
	int x; 
	cin >> x;
	cout << res(x);
	return 0;
}