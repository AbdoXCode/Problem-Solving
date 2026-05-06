#include <bits/stdc++.h>
using namespace std;

double average(int index ,int size, long long arr[]) {
    if (index == size ) return 0;

    return arr[index] + average(index+1 , size , arr);
}

int main() {
    int n;
    cin>>n;

    long long arr[n];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<fixed<<average(0,n,arr) / n;
}