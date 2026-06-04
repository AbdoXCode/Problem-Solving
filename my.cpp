#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    int maxPos = 0;
    int minPos = 0;

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[maxPos]) {
            maxPos = i;
        }

        if (arr[i] <= arr[minPos]) {
            minPos = i;
        }
    }

    int ans = maxPos + (n-1-minPos);

    if (maxPos > minPos) ans--;

    cout<<ans;
}