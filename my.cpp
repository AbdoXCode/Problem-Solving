    #include <bits/stdc++.h>
    using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    getline(cin,s);

    int count = 0;

    for (int i = 0 ;i<s.length();i++) {
        if (isalpha(s[i]) && !isalpha(s[i-1])) {
            count++;
        }
    }

    cout<<count;

}