#include <bits/stdc++.h>
using namespace std;

void printEvenIndices(int n,int index,long long arr[]) {
    if (index >= n) return;

    printEvenIndices(n,index +2,arr);
    cout<<arr[index]<<" ";
}

int main() {
    int n;
    cin>>n;

    long long arr[1001] ={};

    for (int i = 0;i<n;i++) {
        cin>>arr[i];
    }

    printEvenIndices(n,0,arr);
}