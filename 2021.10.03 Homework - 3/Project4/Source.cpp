#include<iostream>

using namespace std;

int main()
{
    long long
        int n = 0;
    int k = 0;
    cin >> n >> k;
    long long res = 1;

    for (int i = 1; i <= k; i++)
    {
        res *= (n - k + i);
        res /= i;
    }
    cout << res;
    return 0;
}