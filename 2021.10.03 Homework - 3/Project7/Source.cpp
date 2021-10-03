#include<iostream>

using namespace std;

int main()
{
    long long
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> a >> b >> c >> d;

    for (int i = 1000; i >= 0; i--)
        if (a * i * i * i + b * i * i + c * i + d == 0)
            cout << i << ' ';
    return 0;
}