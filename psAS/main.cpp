//PS19 Solution AS

#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
int main()
{
    int*triangle = new int[3];
    queue<string> measure;
    while(1)
    {
        for(int i=0; i<3; i++)
        {
            cin >> triangle[i];
            if(triangle[i]<0 || triangle[i]>30000)
            {
                exit(0);
                break;
            }
        }
        if(triangle[0]==0 && triangle[1]==0 && triangle[2]==0)
            break;

        int a = triangle[0]*triangle[0];
        int b = triangle[1]*triangle[1];
        int c = triangle[2]*triangle[2];
        if(a+b==c || b+c==a || c+a==b)
            measure.push("right");
        else
            measure.push("wrong");
    }

    while(!measure.empty())
    {
        cout << measure.front() << endl;
        measure.pop();
    }
    return 0;
}
