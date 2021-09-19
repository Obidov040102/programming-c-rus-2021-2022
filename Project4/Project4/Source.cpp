#include<iostream>
using namespace std;
int main()
{
	int v, t, S = 109;
	cin >> v >> t;
	cout << endl;
	cout << " " << (v * t % 109 + 109) % 109 << endl;
	return 0;
}