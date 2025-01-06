//PS19 Solution AI

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if(T<1 || T>1000)
        exit(0);
    int test[T][3];
    for(int i=0; i<T; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> test[i][j];
            if(test[i][j]<1 || test[i][j]>180)
            {
                exit(0);
                break;
            }
        }
    }
    for(int i=0; i<T; i++)
    {
        int sum = test[i][0] + test[i][1] + test[i][2];
        if(sum==180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
