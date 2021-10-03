#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;
	cin >> x >> y;
	cout << endl;
	for (int i = x; i <= y; i++)
	{
		z = i * i;
		if (x <= z && z <= y && x <= y)
		{
			cout << " " << z << " ";
		}
	}
	return	EXIT_SUCCESS;
}