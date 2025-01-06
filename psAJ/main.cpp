// NSUPS19 Solution AJ : Funny Encryption Method

#include <bits/stdc++.h>
using namespace std;

int digitToBin(int num)
{
    int i = 0;
    long long bin = 0;
    while (num != 0)
    {
        int r = num % 2;
        num /= 2;
        bin = bin + r * pow (10,i);
        i++;
    }
    return bin;
}

int CountOne(long long N)
{
    queue<int> digits;
    int b1 = 0;
    while(N>0)
    {
        int digit = N%10;
        digits.push(digit);
        N = N/10;
    }
    while(!digits.empty())
    {
        int one = digits.front();
        if(one == 1)
            b1++;
        digits.pop();
    }
    return b1;
}

int main()
{
    int t, num, hexnum;
    stack<int> digitBin;
    cin >> t;
    while(t--)
    {
        cin >> num;
        hexnum = num;
        long long bin = 0, hexbin = 0;
        int i = 0;
        while(num!=0)
        {
            int r = num % 2;
            num /= 2;
            bin = bin + r*pow (10,i);
            i++;
        }
        int c = 0;
        while(hexnum>0)
        {
            int digit = hexnum%10;
            int pinbin = digitToBin(digit);
            digitBin.push(pinbin);
            hexnum = hexnum/10;
            c++;
        }
        int cc = c-1;
        while(cc--)
        {
            int top = digitBin.top();
            hexbin = (hexbin + top)*10000;
            digitBin.pop();
        }
        hexbin = hexbin + digitBin.top();
        digitBin.pop();
        cout << CountOne(bin) << " " << CountOne(hexbin) << endl;
    }
    return 0;
}
