#include <bits/stdc++.h>
using namespace std;

long long Summation(int n, int idx,int arr[]) {
    if (idx == n) return 0;
    return arr[idx] + Summation(n,idx +1,arr);
}

int main() {
    int n;
    cin>>n;

    int arr[1001];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<Summation(n,0,arr);
}