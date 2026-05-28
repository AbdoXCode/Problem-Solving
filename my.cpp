#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    long long sum =0;
    for (int i =1;i<=n;i++) {
        int ll = i;
        int sumDigits = 0;
        while (ll > 0) {
            sumDigits += ll % 10;
            ll /=10;
        }
        if (sumDigits >= a && sumDigits<=b) {
            sum+=i;
        }
    }

    cout<<sum;
}