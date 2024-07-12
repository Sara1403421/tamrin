#include <iostream>
using namespace std;
int main()
{
	int n, c = 0;
	cin >> n;
	for (int i = 2; i <= (n / 2); i++)
	{
		if (n % i == 0)
		{
			c++;
		}
	}
	if (c == 0)
	{
		cout << "its prime number!";

	}
	return 0;

}