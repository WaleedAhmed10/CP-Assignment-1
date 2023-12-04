#include <iostream>
using namespace std;

int main()
{
	int n, i, j, prime, composite;
	if (n <= 100 || n == prime)
	{
		cout << "Enter any number = ";
		cin >> n;
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j * j <= 10; j++)
				cout << "This is the Prime Number" << prime;
		}
	}
	else
	{
		cout << "This is the Composite Number" << prime;
	}
}