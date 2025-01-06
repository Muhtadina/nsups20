//PS10 Solution AM

#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#define endl "\n"
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        string paint;
        cin >> paint;
        int R = 0, G = 0, B = 0;
        for(int i=0; i<N; i++)
        {
            if(paint[i]=='R')
                R++;
            else if(paint[i]=='G')
                G++;
            else if(paint[i]=='B')
                B++;
        }
        int Max;
        Max = max(R, G);
        Max = max(Max, B);
        cout << N-Max << endl;
    }
    return 0;
}
