#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    long long sum =0;
    long long sumEven = 0;
    long long sumOdd =0;

    if (a>b) swap(a,b);

    for (int i =a;i<=b;i++) {
        sum += i;
        if (i % 2==0) sumEven +=i;
        else sumOdd +=i;
    }
    cout<<sum<<endl<<sumEven<<endl<<sumOdd;
}