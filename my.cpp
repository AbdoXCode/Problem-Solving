#include <bits/stdc++.h>
using namespace std;

int main() {
    string x,y,final;
    cin>>x>>y;

    for (int i =0;i<x.length();i++) {
        if (x[i] == '1' && y[i]=='0') {
            final += '1';
        }else if (x[i] == '0' && y[i]=='1') {
            final += '1';
        }else {
            final+='0';
        }
    }
    cout<<final;
}