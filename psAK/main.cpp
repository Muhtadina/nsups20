//PS Solution AK

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<1 || n>100)
        exit(0);
    int*a = new int[n];
    int Max;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<0 || a[i]>1000000)
        {
            exit(0);
            break;
        }
    }
    int burle = 0;
    if(n==1)
    {
        cout << burle;
        exit(0);
    }
    Max = -1e9;
    for(int i=0; i<n; i++)
    {
        Max = max(Max, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        burle = burle + (Max-a[i]);
    }
    cout << burle;
    return 0;
}
