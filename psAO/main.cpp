//PS19 Solution AO

#include <iostream>
using namespace std;
int main()
{
    int page = 0;
    cin >> page;
    int*weekly = new int[7];
    int days = 0;
    for(int i=0; i<7; i++)
    {
        cin >> weekly[i];
    }
    int i=0;
    while(page>0)
    {
        page = page - weekly[i];
        days++;
        i++;
        if(i==7)
            i=0;
    }
    while(days>7)
    {
        days = days - 7;
    }
    cout << days;
    return 0;
}
