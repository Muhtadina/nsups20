//PS19 Solution AH

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    char*testcase = new char[T];
    if(T<1 || T>1000)
        exit(0);
    for(int i=0; i<T; i++)
    {
        cin >> testcase[i];
        if(toupper(testcase[i]) =='B')
            cout << "BattleShip" << endl;
        else if(toupper(testcase[i]) =='C')
            cout << "Cruiser" << endl;
        else if(toupper(testcase[i]) =='D')
            cout << "Destroyer" << endl;
        else if(toupper(testcase[i]) =='F')
            cout << "Frigate" << endl;
    }
    return 0;
}
