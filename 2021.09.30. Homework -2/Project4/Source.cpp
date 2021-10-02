#include <iostream>

using namespace std;

int main(int argx, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	if (a == 0 && b == 0)
	{
		cout << "INF" << endl;
	}
	if (a * d == b * c && a != 0 && b != 0)
	{
		cout << "NO" << endl;
	}
	if (b % a == 0 && a * d != b * c)
	{
		cout << -d / a << endl;
	}
	return 0;
}