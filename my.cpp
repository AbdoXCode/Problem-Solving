#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k,n,w,total_cost = 0;
    cin>>k>>n>>w;

    for (int i =1;i<=w;i++) {
        total_cost+=(i*k);
    }

    total_cost-n > 0 ? cout<<total_cost-n : cout<<0;
}