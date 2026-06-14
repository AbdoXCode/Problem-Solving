#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int maximum =0,sum =0;

    for (int i =0 ;i<n;i++) {
        cin>>arr[i];

        maximum = max(maximum,arr[i]);
    }

    for (int i =0;i<n;i++) {
        sum += (maximum - arr[i]);
    }

    cout<<sum;

}