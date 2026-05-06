#include <bits/stdc++.h>
using namespace std;

long long maxArr(int index ,int size, long long arr[]) {
    if (index == size -1) return arr[index];

    return max(arr[index] , maxArr(index +1 , size, arr));
}

int main() {
    int n;
    cin>>n;

    long long arr[n];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<maxArr(0,n,arr);
}