#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        cin.ignore();
        if('a' <= c && c <= 'z') cout << (char)toupper(c) << endl;
        else cout << (char)tolower(c) << endl;
    }
}