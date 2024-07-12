#include <iostream>
using namespace std;
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}
int main()
{
	int x, z;
	cin >> x;
	z = fact(x);
	cout << z;
	return 0;
}