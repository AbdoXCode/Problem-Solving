#include <bits/stdc++.h>
using namespace std;

long long divideBy2(long long n) {
    int count = 0;

    while (n%2 == 0 && n!=0) {
        n = n/2;
        count++;
    }

    return count;
}

int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin>>n;

    long long x;
    long long maximum = 0;

    for (int i =0 ;i<n;i++) {
        cin>>x;

        maximum = max(maximum,divideBy2(x));
    }

    cout<<maximum;
}