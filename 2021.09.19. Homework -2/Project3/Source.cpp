#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	cin >> k >> m >> n;
	if (k >= n)
	{
		cout << 2 * m << endl;
	}
	if (k < n && n % k != 0)
	{
		cout << ((n / k) + 1) * 2 * m <<endl;
	}
	if (n % k == 0)
	{
		cout << (n / k) * 2 * m << endl;
	}
	return EXIT_SUCCESS;
}