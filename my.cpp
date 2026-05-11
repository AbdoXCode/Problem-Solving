#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    double sum = 0;
    cin>>n;

    for (int i =1;i<=n;i++) {
        sum+=log10(i);
    }

    int digits = sum + 1;
    cout<<"Number of digits of "<<n<<"! is "<<digits;
}