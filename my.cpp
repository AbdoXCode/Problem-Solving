#include <bits/stdc++.h>
using namespace std;

string prime(long long x) {
    if (x <= 1) {
        return "NO";
    }

    for (long long i = 2; i * i<=x;i++) {
        if (x % i == 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int n;
    cin>>n;

    while (n--) {
        long long x;
        cin>>x;

        cout<<prime(x)<<endl;
    }
}