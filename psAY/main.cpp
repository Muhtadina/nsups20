//NSUPS19 Solution AY: Points in Figures: Rectangles

#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    queue<double> inputX;
    queue<double> inputY;
    int Count = 0;
    string p = " ";
    while(1)
    {
        getline(cin, p);
        if(p=="*")
            break;
        string s;
        stringstream P(p);
        queue<string> ind;
        while(getline(P, s, ' '))
        {
            ind.push(s);
        }
        double pLx, pLy, pRx, pRy;
        if(ind.front()=="r")
        {
            ind.pop();
             pLx = stod(ind.front());
            ind.pop();
             pLy = stod(ind.front());
            ind.pop();
             pRx = stod(ind.front());
            ind.pop();
             pRy = stod(ind.front());
            ind.pop();
        }
        inputX.push(pLx);
        inputY.push(pLy);
        inputX.push(pRx);
        inputY.push(pRy);
        Count++;
    }
    double P1x[Count], P1y[Count], P2x[Count], P2y[Count];
    for(int i=0; i<Count; i++)
    {
        P1x[i] = inputX.front();
        inputX.pop();
        P1y[i] = inputY.front();
        inputY.pop();
        P2x[i] = inputX.front();
        inputX.pop();
        P2y[i] = inputY.front();
        inputY.pop();
    }
    queue<double> Xx;
    queue<double> Xy;
    while(2)
    {
        double X, Y;
        cin >> X >> Y;
        if(X==9999.9 && Y==9999.9)
            break;
        else
        {
            Xx.push(X);
            Xy.push(Y);
        }
    }
    int c=1;
    while(!Xx.empty())
    {
        double x, y;
        x = Xx.front();
        y = Xy.front();
        Xx.pop();
        Xy.pop();
        bool contain = false;
        for(int i=0; i<Count; i++)
        {
            if(x>P1x[i] && x<P2x[i] && y>P2y[i] && y<P1y[i])
            {
                cout << "Point " << c << " is contained in figure " << i+1 << endl;
                contain = true;
            }
        }
        if(!contain)
            cout << "Point " << c << " is not contained in any figure" << endl;
        c++;
    }
    return 0;
}
