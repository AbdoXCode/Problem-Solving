#include <bits/stdc++.h>
using namespace std;


int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s,final;
    getline(cin,s);

    for (char c: s) {
        if (c == '\\') {
            break;
        }

        final +=c;
    }
    cout<<final;

}