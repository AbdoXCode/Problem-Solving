#include <bits/stdc++.h>
using namespace std;

long long log2n(long long n) {
    if (n /2 ==0) return 0;

    if (n%2==0) return 1 + log2n(n/2);
}

int main() {
    long long n;
    cin>>n;

    cout<<log2n(n);
}