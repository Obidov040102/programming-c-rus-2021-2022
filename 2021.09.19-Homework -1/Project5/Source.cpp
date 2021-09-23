#include<iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	cout << (N / 100) + (N % 100) / 10 + (N % 100) % 10;
	return 0;
}