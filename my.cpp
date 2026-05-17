#include <bits/stdc++.h>

using namespace std;

int main() {
    long long l,r,m,sum = 1;

    cin>>l>>r>>m;

    for (long long i = l;i<=r;i++) {
        sum = (sum * i) % m;
    }
    cout<<sum;
}