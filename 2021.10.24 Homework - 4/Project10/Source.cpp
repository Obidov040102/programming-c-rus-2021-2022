#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[100]{ 0 };
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	int m = 1;

	for (int i = 0; i < n; i++)
		if (i % 2 != 0)
		{
			cout << a[i] << " ";
		}
	cout << endl;

	return EXIT_SUCCESS;
}