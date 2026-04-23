#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;

    getline(cin,s);

    string word = "";

    for (int i = 0;i<s.length();i++) {
        if (s[i] != ' ') {
            word +=s[i];
        }else {
            reverse(word.begin(),word.end());
            cout<<word<<" ";
            word ="";
        }
    }
    reverse(word.begin(),word.end());
    cout<<word;

}