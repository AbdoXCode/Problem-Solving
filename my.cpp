#include <bits/stdc++.h>
using namespace std;


int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    cin>>s;

    for (int i =0; i<s.length();i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        }else if (s[i] >= 'A' & s[i] <='Z') {
            s[i] = s[i] + 32;
        }else if (s[i] >= 'a' & s[i] <='z') {
            s[i] = s[i] - 32;
        }
    }
    cout<<s;

}