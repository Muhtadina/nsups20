//NSUPS19 Solution AV: Probability

#include <bits/stdc++.h>
using namespace std;
/*void Fraction() //Was not accepted by the vjudge, but worked properly...
{                 //Lemme know why it didn't work if you understand...
    int A,B;
    cin >> A >> B;
    int d = B-A +1;
    int n = 0;
    for(int i=A; i<=B; i++)
    {
        int temp = i;
        while(temp>0)
        {
            int digit = temp%10;
            if(digit==0)
            {
                n++;
                break;
            }
            temp = temp/10;
        }
    }
    cout << n << "/" << d << endl;
}*/
void Fraction()
{
    int A,B; cin >> A >> B;
    int temp = A;
    int ans = 0; int count = B-A+1;
    for (int i = A; i <= B; i++)
    {
        string s;
        s = to_string (temp);
        for (int j = 0; j < s.size(); j++)
        {
            if  (s[j] == '0')
            {
                ans++;
                break;
            }
        }
        temp++;
    }
    cout << ans << "/" << count << endl;

}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        Fraction();
    }
    return 0;
}
