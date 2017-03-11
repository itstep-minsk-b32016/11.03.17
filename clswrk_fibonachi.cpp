#include <iostream>
using namespace std;

int recursive_factorial(int x)
{
	if (x == 1)
		return 1;
	else
	{
		return x*recursive_factorial(x-1);
	}
}

int recursive_fibonachi(int x)
{
	if (x == 1 || x == 0)
		return 1;
	else
	{
		int res = recursive_fibonachi(x - 1) + recursive_fibonachi(x - 2);
		//cout << res << " ";
		return res;
	}
}
int main()
{
	cout << recursive_factorial(6) << endl;
	for (int i = 0; i <= 8; i++)
	cout << recursive_fibonachi(i) << endl;
}
