#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 10 == 6 && (n / 10) % 10 == 8)
            cout << "1" << endl;
        else
            cout << "0" << endl;    
    }
}