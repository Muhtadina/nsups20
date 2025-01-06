//NSUPS19 Solution K: NUMBER LINE JUMPS

#include <iostream>
using namespace std;
int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v1<v2)
    {
        cout << "NO" << endl;
        exit(0);
    }
    while(x1<x2)
    {
        x1 = x1+v1;
        x2 = x2+v2;
    }
    if(x1==x2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
