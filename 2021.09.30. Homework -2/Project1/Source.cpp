#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n, m, k;
    cin >> n >> m >> k;
    if (k <= m * n && (k % n == 0 || k % m == 0))
        cout << "YES";
    else
        cout << "NO";
}