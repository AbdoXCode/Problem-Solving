#include <bits/stdc++.h>
using namespace std;

long long suffix_sum(long long arr[],long long y,long long x) {
    if (y == 0) return 0;

    return arr[x-y] + suffix_sum(arr ,y-1,x);
}

int main() {
    long long x,y;
    cin>>x>>y;

    long long arr[x];

    for (long long i=0;i<x;i++) {
        cin>>arr[i];
    }

    cout<<suffix_sum(arr,y,x);
}