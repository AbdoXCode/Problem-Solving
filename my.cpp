#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    bool power = true;

    if (n==0) {
        cout<<"NO";
        return 0;
    }
    if (n==1) {
        cout<<"YES";
        return 0;
    }
    for (long long i = 0;i<n;i++) {
        if (n % 2 != 0) {
            power = false;
            break;
        }
        n/=2;
    }

    if (power) cout<<"YES";
    else cout<<"NO";
}