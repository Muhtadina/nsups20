//PS19 Solution AL

#include <iostream>
using namespace std;
int main()
{
    int N, K;
    cin >> N;
    cin >> K;
    if(N<1 || K<1 || N>10000000 || K>10000000)
        exit(0);
    int*A = new int[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
        if(A[i]<1 || A[i]>1000000000)
        {
            exit(0);
            break;
        }
    }
    int C = 0;
    for(int i=0; i<N; i++)
    {
        if(A[i]%K==0)
            C++;
    }
    cout << C << endl;
    return 0;
}
