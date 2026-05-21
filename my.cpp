#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    string target = "abc";
    while (t--) {
        string s;
        cin>>s;

        int num = 0;
        for (int i =0;i<s.length();i++) {
            if (s[i] != target[i]) {
                num +=1;
            }
        }

        if (num <= 2) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}