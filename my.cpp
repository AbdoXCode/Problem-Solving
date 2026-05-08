#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,x,sum = 0;
    cin>>a>>b>>x;

    if (a > b) swap(a,b);

    long long first = (a + x - 1) / x;
    long long last = b/x;

    if (first > last) {
        cout << 0;
        return 0;
    }

    long long n = last - first + 1;
    sum = n*(first + last)/ 2;

    cout<<sum * x;
}