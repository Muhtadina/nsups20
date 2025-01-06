//PS19 Solution AR

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int pay[T][2];
    for(int i=0; i<T; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> pay[i][j];
            if(pay[i][j]<1 || pay[i][j]>100000)
            {
                exit(0);
                break;
            }
        }
    }
    for(int i=0; i<T; i++)
    {
        double total = pay[i][0]*pay[i][1];
        if(pay[i][0]>1000)
            printf("%.6f\n", total - total*0.1);
        else
            printf("%.6f\n", total);
    }
    return 0;
}
