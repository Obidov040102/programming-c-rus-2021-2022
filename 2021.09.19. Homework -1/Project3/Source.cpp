#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	int K = 0;
	cin >> N >> K;
	cout << (K / 100) + (K % 100) / 10 + (N % 100) % 10;
	return 0;
}