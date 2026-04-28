#include <bits/stdc++.h>
using namespace std;

string palindrome(string cc) {
    string palindrome;

    for (long long i =cc.size() -1 ;i>=0;i--) {
        palindrome+=(cc[i]);
    }
    return palindrome;
}
string wonderfull(long long x) {
    if (x % 2 != 0) {
        string binary = bitset<32>(x).to_string();

        binary = binary.substr(binary.find('1'));

        string xx = palindrome(binary);
        if (xx == binary) {
            return "YES";
        }else {
            return "NO";
        }
    }else {
        return "NO";
    }
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    long long x;
    cin>>x;

    cout<<wonderfull(x);
}