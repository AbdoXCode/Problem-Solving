#include <bits/stdc++.h>
using namespace std;

float mean(int n,double arr[]) {
    double sum =0;
    for (int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum/n;
}

int main() {
    int n;
    cin>>n;

    double arr[n];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<fixed<<mean(n,arr);
}