#include <bits/stdc++.h>
using namespace std;


int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin>>n;

    while (n--) {
        string x;
        cin>>x;

        if (x.find("010") != string::npos|| x.find("101") != string::npos ) {
            cout<<"Good"<<endl;
        }else {
            cout<<"Bad"<<endl;
        }
    }
}