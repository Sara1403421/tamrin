#include <iostream>
using namespace std;
void printstar(int a)
{
	for (int i = 1; i <= a; i++)
	{
		cout<<"*";
	}
	cout<<endl;
}
int main()
{
	int a;
	do 
	{
			cin >> a;
			printstar(a);
	} while (a > 0);
	return 0;
}