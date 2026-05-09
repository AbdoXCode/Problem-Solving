#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    long long x;
    cin>>n>>x;

    long long rem = 0;

    for (char c : n) {
        rem = (rem * 10 + (c - '0')) % x;
    }

    if (rem == 0) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }

}