#include <bits/stdc++.h>
using namespace std;

string Binary(long long x) {
    if (x == 0) return"";

    return Binary(x / 2) + char('0' + x % 2);
}

int main() {
    int n;
    cin>>n;

    while (n--) {
        long long x;
        cin>>x;

        if (x ==0) {
            cout<<0<<endl;
        }else {
            cout<<Binary(x)<<endl;
        }
    }
}