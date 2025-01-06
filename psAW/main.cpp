#include <iostream>
using namespace std;
int pairs(int n)
{
    return n * (n - 1) / 2;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a(n / m), b(n % m);
    int min = pairs(a) * (m - b) + pairs(a + 1) * b;
    int max = pairs(n - m + 1);
    cout << min << " " << max << endl;
    return 0;
}
