#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr1[n];
    int arr2[n];

    int cases;

    for (int i =0;i <n;i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }

    for (int i =0;i<n;i++) {
        if (arr1[i] > arr2[i] || arr1[i] < arr2[i]) {
            cout<<"rated";
            return 0;
        }
    }
    for (int i=0;i<n;i++) {
        if (i > 0 && arr1[i-1] < arr1[i]) {
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
}