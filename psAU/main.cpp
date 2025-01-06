//PS19 Solution AU

#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    b = n - 1;
    a = n - b;
    stack<int> num;
    stack<int> den;
    while(a<b)
    {
        if(__gcd(a,b)==1)
        {
            num.push(a);
            den.push(b);
        }
        a++;
        b--;
    }
    cout << num.top() << " " << den.top();
    return 0;
}
