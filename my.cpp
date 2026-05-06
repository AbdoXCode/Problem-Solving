#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    bool prime = true;

    if (n ==0 || n==1) {
        cout<<"NO";
        return 0;
    }
    for (long long i =2;i*i<=n;i++) {
        if (n%i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)cout<<"YES";
    else cout<<"NO";
}